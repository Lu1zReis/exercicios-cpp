#ifndef CADASTRAR_H
#define CADASTRAR_H


class cadastro
{
    private:
        char nome[30];

    public:
        bool set_Nome(char Novo_nome[]);
        bool get_Nome(char Nome[]);
};
#endif // CADASTRAR_H
