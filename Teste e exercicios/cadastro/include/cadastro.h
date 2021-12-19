#ifndef CADASTRO_H
#define CADASTRO_H


class cadastro
{
    private:
        char nome[30];
        char email[30];
        char senha[30];
        int idade;
    public:
        bool set_Nome(char Novo_nome[]);
        bool set_Email(char email[]);
        bool set_Senha(char senha[]);
        bool set_Idade(int idade);

        bool get_Nome(char nome[]);
        bool get_Email(char email[]);
        bool get_Senha(char senha[]);
        bool get_Idade(int idade);
};

#endif // CADASTRO_H
