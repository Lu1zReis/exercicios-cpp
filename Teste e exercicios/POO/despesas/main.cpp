#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;
fstream arquivo;

struct conta {
    string nome;
    string dia, mes;
    string data;
    string valor;
};

string getNome(string *l) {
    string nome, linha = *l;
    for(int i = 0; i < linha.size(); i++) {
        if(linha[i] == ';')
            break;
        nome += linha[i];
    }
    return nome;
}

string getValor(string *l) {
    string linha = *l;
    string valor;
    int cont = 0;
    for(int i = 0; i < linha.size(); i++) {
        if(linha[i] == ';')
            cont++;
        if(cont == 2) {
            if(linha[i] != ';')
                valor += linha[i];
        }
    }
    return valor;
}

string getData(string *l) {
    string linha = *l;
    string valor;
    int cont = 0;
    for(int i = 0; i < linha.size(); i++) {
        if(linha[i] == ';') {
            for(int j = i+1; j < linha.size(); j++) {
                if(linha[j] == ';') {
                    return valor;
                }
                valor += linha[j];
            }
        }

    }
}

string formataData(string *d) {
    string novaD = *d;
    if(novaD.size() == 1) {
        novaD.insert(0, "0");
    }
    return novaD;
}

int maiorNome() {

    string linha, nome;
    vector<string> nomes;

    int pos = 0, maior;

    arquivo.open("bancoDados.txt", ios::in);
    if(arquivo.is_open()) {
        while(getline(arquivo, linha)) {
            int cont = 0;
            for(int i = 0; i < linha.size(); i++) {
                if(linha[i] == ';') {
                    cont++;
                }
                if(cont == 0) {
                    nome += linha[i];
                }
            }
            nomes.push_back(nome);
            nome = "";
        }
        arquivo.close();
    }

    for(int j = 0; j < nomes.size(); j++) {
        if(j == 0) {
            maior = nomes[j].size();
        } else {
            if(maior < nomes[j].size()) {
                maior = nomes[j].size();
            }
        }
    }

    return maior;
}

int maiorvalor() {
    string linha, valor;
    vector<string> valores;

    int pos = 0, maior;

    arquivo.open("bancoDados.txt", ios::in);
    if(arquivo.is_open()) {
        while(getline(arquivo, linha)) {
            int cont = 0;
            for(int i = 0; i < linha.size(); i++) {
                if(linha[i] == ';') {
                    cont++;
                }
                if(cont == 2) {
                    valor += linha[i];
                }
            }
            valores.push_back(valor);
            valor = "";
        }
        arquivo.close();
    }

    for(int j = 0; j < valores.size(); j++) {
        if(j == 0) {
            maior = valores[j].size();
        } else {
            if(maior < valores[j].size()) {
                maior = valores[j].size();
            }
        }
    }

    return maior;
}

int ultmPosicao() {
    char contLinha[] = {};
    string linha, valor;
    int cont=0, x=0, valorFinal;

    arquivo.open("bancoDados.txt", ios::in);

    if(arquivo.is_open()) {
        while(getline(arquivo, linha)) {
            for(int i = 0; i < linha.size(); i++) {
                if(linha[i] == ';')
                    break;
                if(cont == 0) {
                    contLinha[i] = linha[i];
                    x++;
                    //cout << contLinha[i] << " "<< x <<endl;
                }
            }
        }
        arquivo.close();
    }

    // verificando se é um número
    for(int j = 0; j < x; j++) {
        if(isdigit(contLinha[j])) {
            valor += contLinha[j];
        }
    }
    istringstream(valor) >> valorFinal;
    return valorFinal;
}

void addConta() {
    // VARIAVEIS E OBJETOS DA FUNCAO
    conta adicionar;
    arquivo.open("bancoDados.txt", ios::out|ios::app);
    char opc = 's';

    while(opc == 'S' or opc == 's') {
        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
        cout << "Digite o nome da conta: ";
        cin >> adicionar.nome;
        cout << "Digite o dia e o mes respectivamente: ";
        cin >> adicionar.dia >> adicionar.mes;
        cout << "Digite o valor da conta: ";
        cin >> adicionar.valor;

        adicionar.dia = formataData(&adicionar.dia);
        adicionar.mes = formataData(&adicionar.mes);

        arquivo << adicionar.nome << ";" << adicionar.dia << "/" <<adicionar.mes << ";" << adicionar.valor << endl;
        cout << "Deseja continuar?[s/n] ";
        cin >> opc;
    }

    arquivo.close();
}

void listContas() {
    // VARIAVEIS E OBJETOS DA FUNCAO
    int nomeSize = maiorNome();
    int contaSize = maiorvalor();
    // int valorSize = maiorValor();
    cout << nomeSize << endl;
    cout << contaSize << endl;
    string linha;
    conta lista;
    arquivo.open("bancoDados.txt", ios::in);

    if(arquivo.is_open()) {
        cout << "   NOME           R$ VALOR       DATA\n";
        while(getline(arquivo, linha)) {
             // PEGANDO OS RESPECTIVOS VALORES DAS LINHAS
            lista.nome = getNome(&linha);
            lista.valor = getValor(&linha);
            lista.data = getData(&linha);

            //CENTRALIZANDO O TEXTO (NOME PARA VALOR)
            cout << "  " << lista.nome << "         ";
            int diferenca = nomeSize - lista.nome.size();
            for(int i = 0; i < diferenca; i++)
                cout << " ";

            // CENTRALIZANDO O TEXTO (VALOR PARA DATA)
            int diferenca2 = contaSize - lista.valor.size();
            for(int i = 0; i < diferenca2; i++)
                cout << " ";
            cout << lista.valor << "         " << lista.data << endl;


        }
        arquivo.close();
    } else {
         cout << "Nao foi possivel abrir o arquivo\n";
     }

}

int menu() {

    int opc = 0;

    cout << "TOTAL: R$1304.50" << endl;
    cout << "GASTO: R$240.00" << endl;
    cout << "========MENU=========" << endl;
    cout << "1 - LISTAR CONTAS" << endl;
    cout << "2 - ADICIONAR CONTA" << endl;
    cout << "3 - ATUALIZAR CONTA" << endl;
    cout << "4 - REMOVER CONTA" << endl;
    cout << "5 - SAIR DO PROGRAMA" << endl;
    cout << "\n";
    // validando a escolha
    while((opc != 1) and (opc != 2) and (opc != 3) and (opc != 4) and (opc != 5)) {
        cout << "escolha uma opção: ";
        cin >> opc;
    }

    // redirecionando
    switch(opc) {
    case 1:
        listContas();
        return 1;
    case 2:
        addConta();
        return 2;
    case 3:
        cout << "updateConta();" << endl;
        return 3;
    case 4:
        cout << "removeConta();" << endl;
        return 4;
    case 5:
        cout << "Programa finalizado!" << endl;
        return 5;
    }

}

int main()
{
    // deixando em loop até o usuário finalizar
    int sair = 0;
    while(sair != 5) {
        cout << "\n---------------------\n";
        sair = menu();
    }
    cout << ultmPosicao() << endl;
    return 0;
}
