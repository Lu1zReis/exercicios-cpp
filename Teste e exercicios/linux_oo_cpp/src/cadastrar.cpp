#include "../include/cadastrar.h"
#include <string.h>
bool cadastro::set_Nome(char Nome[])
{
    strcpy(this->nome, Nome);
}
bool cadastro::get_Nome(char Nome[])
{
    return strcpy(Nome, this->nome);
}

