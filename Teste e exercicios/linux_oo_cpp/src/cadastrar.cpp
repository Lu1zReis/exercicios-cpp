#include "cadastrar.h"
#include <string.h>
// Parte dasa funções de inserir e pegar o NOME
bool cadastro::set_Nome(char Nome[]) {
    strcpy(this->nome, Nome);
}
bool cadastro::get_Nome(char Nome[]) {
    return strcpy(Nome, this->nome);
}

// Parte dasa funções de inserir e pegar o EMAIL
bool cadastro::set_Email(char novo_email[]) {
    strcpy(this->email, novo_email);

}
bool cadastro::get_Email(char Email[]) {
    return strcpy(Email, this->email);
}

// Parte dasa funções de inserir e pegar a IDADE
int cadastro::set_Idade(int Nova_Idade) {
    idade = Nova_Idade;
}
int cadastro::get_Idade() {
    return this->idade;
}
