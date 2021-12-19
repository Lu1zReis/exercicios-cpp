#include <iostream>
#include "cadastro.h"
using namespace std;



int main()
{
    char nome[50];
    cadastro Cadastrar;
    Cadastrar.set_Nome("Teste Teste");
    Cadastrar.get_Nome(nome);
    cout<<nome<<endl;
    return 0;
}
