#ifndef CADASTRAR_H
#define CADASTRAR_H


class cadastro
{
    private:
        char nome[30];
        char email[50];
        int idade;

    public:
        bool set_Nome(char Novo_nome[]);
        bool get_Nome(char Nome[]);

        bool set_Email(char novo_email[]);
        bool get_Email(char Email[]);

        int set_Idade(int Nova_Idade);
        int get_Idade();
};
#endif // CADASTRAR_H
