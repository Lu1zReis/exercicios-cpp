#include <iostream>
#include <fstream>

using namespace std;

// arquivos que iremos trabalhar
fstream arquivoJSON;
fstream arquivoHTML;
fstream arquivoCSS;
fstream arquivoSQL;

// funcao para pegar os campos dos atributos
string getAtributo(string *l) {
        string linha = *l, resu;
        int cont = 0;
        for(int i = 0; i < linha.size(); i++) {
                if(linha[i] == '"') {
                        cont++;
                } else {
                    // se aspas estiver no range de 2 aspas, significa que o nome do atributo esta ai
                    if(cont > 0 and cont < 2)
                        resu += linha[i];
                }
        }
        return resu;
}

// funcao para pegar o valor dos atributos
string getValor(string *l) {
        string linha = *l, resu;
        int cont = 0, aux = 0;

        // verificando qual o valor do atributo
        for(int i = 0; i < linha.size(); i++) {
                // iremos contar por aspas
                if(linha[i] == '"') {
                        cont++;
                        aux += i;
                } else {
                    // se aspas aparecer mais de 2x, significa que ja estamos no valor do atributo
                    if(cont > 2 and cont < 4)
                        resu += linha[i];
                }
        }

        // verificando se ha o valor opcional na linha

            for(int i = 0; i < linha.size(); i++) {
                    if(linha[i] == ':' || linha[i] == 'e') {
                            cont++;
                    } else {
                        if(cont > 2 and cont < 4)
                            resu += linha[i+1];
                    }
            }


        return resu;
}

// convertendo para um tipo que o HTML aceite
string getTipoHTML(string *v) {
    string valor = *v;
    if(valor == "string")
            return "text";
    if(valor == "decimal")
            return "number";
    if(valor == "integer")
            return "number";

    return valor;

}

// usando as virgula no arquivo json para colocar de forma correta no arquivo sql
char getVirgula(string *l) {
    string linha = *l;
    int cont = 0;
    for(int i = 0; i < linha.size(); i++) {
        if(linha[i] == '}') {
            cont++;
        } else {
            if(linha[i] == ',') {
                cont++;
            }
        }
    }
    if(cont == 2) {
        return ',';
    } else {
        return ' ';
    }
}

// convertendo para um tipo que o SQL aceite
string getTipoSQL(string *v) {
    string valor = *v;

    if(valor == "string")
            return "VARCHAR(50)";
    if(valor == "decimal")
            return "DECIMAL(10,2)";
    if(valor == "integer")
            return "INT";

    return valor;
}

void createSQL(string *nomeArquivo) {
    string linha, atributo, valor, resu = "";
    // abrindo o json
    arquivoJSON.open(*nomeArquivo, ios::in);

    if(arquivoJSON.is_open()) {
        // criando um sql
        arquivoSQL.open("dados.sql", ios::out);

        arquivoSQL << "CREATE DATABASE dados;" << endl;
        arquivoSQL << "USE dados;" << endl;
        arquivoSQL << "CREATE TABLE atributos( \n";

        while (getline(arquivoJSON, linha)) {

            atributo = getAtributo(&linha);
            valor = getValor(&linha);
            valor = getTipoSQL(&valor);

            if(atributo == "nome") {
                resu += valor + " ";
            }
            if(atributo == "tipo") {
                resu += valor;
            }
            if(getVirgula(&linha) == ',') {
                resu += ",\n";
            } else {
                if(getVirgula(&linha) == ' ') {
                    resu += "";
                }
            }
            arquivoSQL << resu;
            resu = "";
        }
        arquivoSQL << "\n);" << endl;

    } else {
        cout << "arquivo nao encontrado ou nao existe/nao foi possivel criar o arquivo SQL" << endl;
    }

    arquivoSQL.close();
    arquivoJSON.close();

}

// estilizando o formulario
void createCSS(string *nomeArquivo) {

    // variaveis
    string linha, valor, atributo, resultado;


    // abrindo o arquivo json
    arquivoJSON.open(*nomeArquivo, ios::in);


    if(arquivoJSON.is_open()) {

        arquivoCSS.open("style.css", ios::out);

        arquivoCSS << ".formulario {\n";
        arquivoCSS << "     width: 16%;\n";
        arquivoCSS << "     text-align: center;\n";
        arquivoCSS << "     background-color: blue;\n";
        arquivoCSS << "     color: white;\n";
        arquivoCSS << "}\n";

        while(getline(arquivoJSON, linha)) {

            atributo = getAtributo(&linha);
            valor = getValor(&linha);

            if(atributo == "nome") {
                resultado = "." + valor + "{\n";
                arquivoCSS << resultado;
                arquivoCSS << "     margin-bottom: 3%;\n";
                arquivoCSS << "     padding: 5px;\n";
                arquivoCSS << "     width: 100%;\n";
                arquivoCSS << "     text-align: center;\n";
                arquivoCSS << "}\n";
            }


        }

    } else {
        cout << "arquivo nao encontrado ou nao existe/nao foi possivel criar o arquivo CSS" << endl;
    }

    arquivoJSON.close();
    arquivoCSS.close();

}

void createHTML(string *nomeArquivo) {

    //                              VARIAVEIS
    // linha ira ser a variavel que ira pegar os valores linha por linha
    // atributo ira pegar o campo geral e o nome
    // valor ira pegar o valor do atributo na linha
    // resultado ira armazenar os <input> do HTML para depois passarmos para o arquivo index.html
    string linha, atributo, valor, resultado, opc, nomeArq;

    nomeArq = *nomeArquivo;

    // abrindo o arquivo json
    arquivoJSON.open(nomeArq, ios::in);


        if(arquivoJSON.is_open()) {


            arquivoHTML.open("index.html", ios::out);

            arquivoHTML << "<html lang='pt-br'>" << endl;
            arquivoHTML << "    <head>" << endl;
            arquivoHTML << "        <meta charset='UTF-8'/>" << endl;
            arquivoHTML << "        <title>Teste Prático</title>" << endl;
            arquivoHTML << "         <link rel='stylesheet' type='text/css' href='style.css'>" << endl;
            arquivoHTML << "    <head>" << endl;
            arquivoHTML << "    <body>" << endl;
            arquivoHTML << "        Os campos marcados com * são obrigatórios<hr>" << endl;
            arquivoHTML << "        <form class='formulario'>" << endl;

                while(getline(arquivoJSON, linha)) {
                        atributo = getAtributo(&linha);

                        // getTipo pega o valor do getValor e converte ele para um tipo aceitavel em html, ex: string -> text
                        valor = getValor(&linha);
                        valor = getTipoHTML(&valor);

                        if(atributo == "nome")
                                resultado = "           " + valor + ": " + "<input name='" + valor + "' class='" + valor + "'";
                        if(atributo == "tipo")
                                resultado += " type='" + valor + "'><br>\n";

                        // passando o * para mostrar campos obrigatórios
                        if(atributo == "opcional"){
                            if(valor == "true") {
                                opc = "";
                            } else {
                                opc = "*";
                            }
                        }
                        arquivoHTML << opc + resultado;
                        resultado = "";
                        opc = "";
                }

                arquivoHTML << "           <button>Enviar</button>" << endl;
                arquivoHTML << "        </form>" << endl;
                arquivoHTML << "    </body>" << endl;
                arquivoHTML << "</html>" << endl;
                arquivoHTML.close();

        } else {
                cout << "arquivo nao encontrado ou nao existe/nao foi possivel criar o arquivo HTML" << endl;
        }

        arquivoJSON.close();

    createCSS(&nomeArq);
    createSQL(&nomeArq);
}

int main() {
        // adicionando uma variavel para abrir o json.
        string nomeArquivo;

        cout << "Digite o nome do arquivo JSON que ira abrir: ";
        cin >> nomeArquivo;
        createHTML(&nomeArquivo);

        return 0;
}
