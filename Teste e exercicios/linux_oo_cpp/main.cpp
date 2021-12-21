#include <iostream>
#include "cadastrar.h"
using namespace std;

/* CLASSE DO CADASTRO */
cadastro Cadastrar[3];

int main()
{
    char nome[30];

    Cadastrar[0].set_Nome("Luiz1");
    Cadastrar[0].get_Nome(nome);
    cout << nome << endl;

    Cadastrar[1].set_Nome("Luiz");
    Cadastrar[1].get_Nome(nome);
    cout << nome;

    return 0;
}
