#include "cadastro.h"
#include <string.h>

bool cadastro::set_Nome(char Novo_nome[]) {
    strcpy(nome, Novo_nome);

}
bool cadastro::get_Nome(char Novo_nome[]) {
    strcpy(Novo_nome, this->nome);

}

/*
bool set_Email(char email[]);
bool set_Senha(char senha[]);
bool set_Idade(int idade);

bool get_Nome(char nome[]);
bool get_Email(char email[]);
bool get_Senha(char senha[]);
bool get_Idade(int idade);
*/
