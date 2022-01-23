#include <iostream>
#include "include/cadastro.h""

using namespace std;

cadastro Cadastrar[10];

int menu(){
    int escolha = 0;
    cout << "1)Cadastre um nome\n";
    cout << "2)Veja a lista de nomes\n";
    cout << "3)Sair\n";
    cout << "Escolha: ";
    cin >> escolha;
    return escolha;

}
int main()
{
    char nome[50];

    Cadastrar[0].set_Nome("Luiz");
    Cadastrar[0].get_Nome(nome);

    return 0;
}
