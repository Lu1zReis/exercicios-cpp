#include <iostream>
#include "cadastro.h"

using namespace std;


int menu(){
    int escolha = 0;
    cout << "1)Cadastre um nome\n";
    cout << "2)Veja a lista de nomes\n";
    cout << "3)Sair\n";
    cout << "Escolha: "
    cin >> escolha;
    return escolha;

}
int main()
{
    char nome[50];
    int vez = 0;
    int Menu = menu();
    cout << Menu;

    return 0;
}
