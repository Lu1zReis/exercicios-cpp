#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "cadastrar.h"
using namespace std;

// variavel global para sabermos a posicao do programa
int posi;

/* CLASSE DO CADASTRO */
cadastro Cadastrar[3];

void InserirDados(int *pos) {
    char nome[30], email[50];
    int idade;

    cout << "\nInsira um nome: ";
    cin >> nome;
    cout << "Insira seu e-mail: ";
    cin >> email;
    cout << "Insira sua idade: ";
    cin >> idade;

    //Cadastrando os dados
    Cadastrar[*pos].set_Nome(nome);
    Cadastrar[*pos].set_Email(email);
    Cadastrar[*pos].set_Idade(idade);

    posi += 1;
    system("clear");


}
void listagem() {
    system("clear");
    char nome[30], email[50], sair[10];
    int idade;

    cout << "---------Listagem (Dados)---------" << endl;
    cout << "pos x: Nome | e-mail | idade\n"<< endl;

    for(int g = 0; g < posi; g++) {

        Cadastrar[g].get_Nome(nome);
        Cadastrar[g].get_Email(email);
        idade = Cadastrar[g].get_Idade();

        cout << "Pos " << g+1 <<": "<< nome;
        cout << " | " << email << " | " << idade << endl;
    }
    cout << "\nAperte qualquer botao e confirme para sair: ";
    cin >> sair;
    system("clear");
}

void mudar() {
    system("clear");
    char nome[30], email[50];
    int n, idade, esc;

    cout << "1. Deseja mudar um nome?" << endl;
    cout << "2. Deseja mudar um email?" << endl;
    cout << "3. Deseja mudar uma idade?" << endl;
    cout << "4. Cancelar" << endl;
    cout << "\nopcao: ";
    cin >> esc;

    if(esc == 1) {
        cout << "-----NOMES-----"<<endl;
        for(int g = 0; g < posi; g++) {

            Cadastrar[g].get_Nome(nome);

            cout << g+1 <<". "<< nome << endl;

        }
        cout << "\nQual posicao mudar: ";
        cin >> esc;
        cout << "Qual sera o novo nome? ";
        cin >> nome;
        Cadastrar[esc-1].set_Nome(nome);
        system("clear");
    }

    else if(esc == 2) {
        cout << "-----EMAIL'S-----"<<endl;
        for(int g = 0; g < posi; g++) {

            Cadastrar[g].get_Email(email);

            cout << g+1 <<". "<< email << endl;

        }
        cout << "\nQual posicao mudar: ";
        cin >> esc;
        cout << "Qual sera o novo email? ";
        cin >> email;
        Cadastrar[esc-1].set_Email(email);
        system("clear");
    }

    else if(esc == 3) {
        cout << "-----IDADES-----"<<endl;
        for(int g = 0; g < posi; g++) {

            idade = Cadastrar[g].get_Idade();

            cout << g+1 <<". "<< idade << endl;

        }
        cout << "\nQual posicao mudar: ";
        cin >> esc;
        cout << "Qual sera a nova idade? ";
        cin >> idade;
        Cadastrar[esc-1].set_Idade(idade);
        system("clear");
    }
    else if(esc == 4) {
        system("clear");
        cout << "Mudanca cancelada\n";
    }
    else {
        system("clear");
        cout << "opcao invalida!\n ";
    }



}

void menu() {
    int escolha;
    cout << "------------MENU------------    POS:" << posi << endl;
    cout << "1. Cadastrar dados" << endl;
    cout << "2. Listar dados cadastrados" << endl;
    cout << "3. Mudar dados cadastrados" << endl;
    cout << "4. Sair\n" << endl;
    cout << "Escolher Opcao: ";
    cin >> escolha;

    if(escolha == 1)
    {
        InserirDados(&posi);
    }
    else if(escolha == 2)
    {
        listagem();
    }
    else if(escolha == 3) {
        mudar();
    }
    else if(escolha == 4)
    {
        cout << "\nPrograma finalizado!" << endl;
        exit(0);
    }else{
        system("clear");
        cout << "Escolha uma opcao correta\n";
    }
}

int main()
{
    while(1){
        menu();
    }
    return 0;
}
