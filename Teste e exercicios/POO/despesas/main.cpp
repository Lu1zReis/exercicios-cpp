#include <iostream>
#include <fstream>
using namespace std;
fstream arquivo;
 
struct conta {
    string nome;
    string dia, mes;
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
        arquivo << adicionar.nome << ";" << adicionar.dia << "/" <<adicionar.mes << ";" << adicionar.valor << endl;
        cout << "Deseja continuar?[s/n] ";
        cin >> opc;
    }
 
    arquivo.close();
}
 
void listContas() {
    // VARIAVEIS E OBJETOS DA FUNCAO
  
    string linha;
    conta lista;
    arquivo.open("bancoDados.txt", ios::in);
 
    if(arquivo.is_open()) {
        cout << "   NOME         VALOR    DATA\n";
        while(getline(arquivo, linha)) {
             // PEGANDO OS RESPECTIVOS VALORES DAS LINHAS
            lista.nome = getNome(&linha);
             lista.valor = getValor(&linha);
           
             cout << "  " << lista.nome << "        " << lista.valor << endl;
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
 
    return 0;
}
