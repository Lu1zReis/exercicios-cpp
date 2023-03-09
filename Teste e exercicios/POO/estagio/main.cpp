#include <iostream>
#include <fstream>
using namespace std;

fstream arquivoJSON;
fstream arquivoHTML;
fstream arquivoCSS;

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
string getTipo(string *v) {
    string valor = *v;
    if(valor == "string")
            return "text";
    if(valor == "decimal")
            return "number";
    if(valor == "integer")
            return "number";

    return valor;

}

void createCSS(string *nomeArquivo) {

    // variaveis
    string linha, valor, atributo, resultado;

    arquivoCSS.open("style.css", ios::out);

    // abrindo o arquivo json
    arquivoJSON.open(*nomeArquivo, ios::in);


    if(arquivoJSON.is_open()) {
        while(getline(arquivoJSON, linha)) {

            atributo = getAtributo(&linha);
            valor = getValor(&linha);

            if(atributo == "nome")
                resultado = "." + valor + "{\n";

           // arquivoCSS <<
        }

    } else {
        cout << "arquivo nao encontrado ou nao existe" << endl;
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

    arquivoHTML.open("index.html", ios::out);

    arquivoHTML << "<html lang='pt-br'>" << endl;
    arquivoHTML << "    <head>" << endl;
    arquivoHTML << "        <meta charset='UTF-8'/>" << endl;
    arquivoHTML << "        <title>Teste Prático</title>" << endl;
    arquivoHTML << "         <link rel='stylesheet' type='text/css' href='styles.css'>" << endl;
    arquivoHTML << "    <head>" << endl;
    arquivoHTML << "    <body>" << endl;
    arquivoHTML << "        <form class='formulario'>" << endl;
    // abrindo o arquivo json
    arquivoJSON.open(*nomeArquivo, ios::in);


        if(arquivoJSON.is_open()) {
                while(getline(arquivoJSON, linha)) {
                        atributo = getAtributo(&linha);

                        // getTipo pega o valor do getValor e converte ele para um tipo aceitavel em html, ex: string -> text
                        valor = getValor(&linha);
                        valor = getTipo(&valor);

                        if(atributo == "nome")
                                resultado = "           " + valor + ": " + "<input name='" + valor + "' class='" + valor + "'";
                        if(atributo == "tipo")
                                resultado += "type='" + valor + "'><br>\n";

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

        } else {
                cout << "arquivo nao encontrado ou nao existe" << endl;
        }

        arquivoJSON.close();

    arquivoHTML << "           <button>Enviar</button>" << endl;
    arquivoHTML << "        </form>" << endl;
    arquivoHTML << "    </body>" << endl;
    arquivoHTML << "</html>" << endl;
    arquivoHTML.close();

    nomeArq = *nomeArquivo;
    createCSS(&nomeArq);
}

// lendo o json
void readJSON() {


}

int main() {
        // adicionando uma variavel para abrir o json.
        string nomeArquivo;

        cout << "Digite o nome do arquivo JSON que ira abrir: ";
        cin >> nomeArquivo;
        createHTML(&nomeArquivo);

        return 0;
}
