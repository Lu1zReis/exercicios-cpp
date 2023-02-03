#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// variavel arquivo
fstream arquivo;
vector<string> nomes;

void executandoArquivo() {
    string nome, linha;
    char opcao = 's';
    // Abrindo o arquivo de modo que ira inserir os dados
    arquivo.open("dados.txt", ios::out|ios::app); // ios::app que faz a funcao de continuar adicionando mais nomes

    while(opcao == 's') {
        cout << "Digite um nome: ";
        cin >> nome;
        arquivo << nome << "\n";
        cout << "\nDigitar um novo nome?[s/n]: ";
        cin >> opcao;
    }

    // FECHANDO O ARQUIVO
    arquivo.close();
}

void removerNomes() {

    arquivo.open("dados.txt", ios::out|ios::trunc);
    if(arquivo.is_open()) {
        cout << "Nome removido com sucesso!\n";
        for(int i = 0; i < nomes.size(); i++) {
            arquivo << nomes[i] << endl;
        }
        arquivo.close();
    }
}

void lendoArquivo() {
    string nome, linha;
    arquivo.open("dados.txt", ios::in);
    // Podemos enviar um dado de arquivo tambem da seguinte forma:
    // arquivo >> nome;
    if(arquivo.is_open()) {
        cout << "\n------NOMES DIGITADOS------\n";
        while(getline(arquivo, linha)) {
            cout << linha << endl;
        }
        arquivo.close();
    } else {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }
}

void localizandoDadoArquivo() {

    string nome, linha;
    char op;
    cout << "Deseja remover algum nome?[s/n] ";
    cin >> op;
    if(op == 's'){
        cout << "Qual o nome? ";
        cin >> nome;
        arquivo.open("dados.txt", ios::in);

        if(arquivo.is_open()) {
            cout << "\n------======------\n";
            while(getline(arquivo, linha)) {
                    if(linha != nome) {
                        nomes.push_back(linha);
                    }
                }
                arquivo.close();
                removerNomes();
            }
            else {
            cout << "Nao foi possivel abrir o arquivo" << endl;
        }
    }
}

int main()
{

    char opcao = 's';

    cout << "\nDigitar um novo nome?[s/n]: ";
    cin >> opcao;


    // ABRINDO O ARQUIVO OU O CRIANDO
    if(opcao == 's') {
        executandoArquivo();
    }


    // LENDO O QUE ESTA NO ARQUIVO
    lendoArquivo();

    // TENTANDO LOCALIZAR UM NOME
    localizandoDadoArquivo();

    lendoArquivo();

    return 0;
}
