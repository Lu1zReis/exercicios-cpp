#include <iostream>
#include <cctype>

using namespace std;

// COMBINANDO OU DIVIDINDO
string s_cOperacao(char *operacao, string *valor) {
    string novoValor = *valor;
    string caractere;

    // DIVIDIR
    if(*operacao == 'S') {
        for(int i = 0; i < novoValor.size(); i++) {
            // VERIFICANDO SE HÁ UM VALOR COM CHAR MAIUSCULO, SE SIM, DAMOS UM ESPACO ANTES OU SE É A PRIMEIRA POS
            if(i != 0) {
                if(isupper(novoValor[i])) {
                    caractere += " ";
                }
            }
            caractere += novoValor[i];
        }
    }

    // COMBINAR
    else {
        for(int j = 0; j < novoValor.size(); j++) {
            // VERIFICANDO SE HÁ UM VALOR COM ESPACO, SE SIM, TIRAMOS O ESPACO
            if(!isspace(novoValor[j])) {
                caractere += novoValor[j];
            }
        }
    }

    return caractere;

}

// DEIXANDO TUDO EM MINUSCULO OU DEIXANDO AS PRIMEIRAS LETRAS EM MAIUSCULAS
string tipoDado(char *dado, char *operacao, string *valor) {
    char op = *operacao;
    string val = *valor;

    if(*operacao == 'S') {

        // dividindo primeiro antes de deixar formatado
        string resulOp = s_cOperacao(&op, &val);
        val = "";

        for(int y = 0; y < resulOp.size(); y++) {
            if(isupper(resulOp[y])) {
                val += tolower(resulOp[y]);
            } else{
                val += resulOp[y];
            }
        }

        if(*dado == 'M') {
            // apagando () que contem no metodo
            val.pop_back();
            val.pop_back();
        }

    }
    else {
        if(*dado == 'C') {
            val[0] = toupper(val[0]);
        }
        for(int x = 0; x < val.size(); x++) {
            if(isspace(val[x])) {
                val[x+1] = toupper(val[x+1]);
            }
        }
        val = s_cOperacao(&op, &val);
        if(*dado == 'M') {
            val.push_back('(');
            val.push_back(')');
        }
    }

    return val;
}

int main()
{
    // valor do usuario / Operacao / Tipo de dado
    string valor;
    string resu;
    cin >> valor;
    // Separar / Combinar
    char operacao = valor[0];

    // Metodo / Classe / Variavel
    char dado = valor[2];

    for(int j = 4; j < valor.size(); j++)
        resu += valor[j];

     string resultado = tipoDado(&dado, &operacao, &resu);
     cout << resultado;

    return 0;
}
