#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
//configuracao da chave para a criptografia
char CHAVE[] = "AbCd";
int TAM_CHAVE = strlen(CHAVE);
//-------------------------------------

//-------------vetor-------------------
char TEXTO[100000];
char TAM_TEXTO = 100000;

//-------------------------------------
void Recebe_texto(char tipo[]){
    char aux[TAM_TEXTO];
    if(strcmp(tipo,"msg")==0){
        cout << "Receber texto para criptografar" << endl;
        cout << "Digite o texto: ";
        cin >> aux;


        if(strlen(aux)<= TAM_TEXTO){
            cout << "Texto recebido com sucesso" << endl;
            system("pause");
        }else{
            cout << "Tamanho do Texto excede o limite" << endl;
            system("pause");
        }

        system("pause");
    }else if(strcmp(tipo,"arquivo")==0){
        cout << "Recebendo Arquivo" << endl;
        system("pause");
    }else{
    cout << "erro ao receber texto"<< endl;
    }
}

void Receber_Arquivo(){

}
void Menu_Criptografar(){
int opcao;
    cout << "Criptografia de Dados\n" << endl;
    cout << "Criptografar texto ou Arquivo\n" << endl;
    cout << "\n1 - Digitar texto" << endl;
    cout << "\n2 - Importar arquivo de texto (txt)" << endl;
    cout << "\n3 - Voltar ao menu principal" << endl;
    cout << "\nInforme a opcao desejada: ";
    cin >> opcao;

    switch(opcao){
case 1:
    system("cls");
    Recebe_texto("msg");
    break;
case 2:
    system("cls");
    Recebe_texto("arquivo");
    break;
case 3:
    break;
default:
    cout << "Opcao invalida, tente novamente";

    }
}

void Menu(){
    int opcao;
    while(1){
        system("cls");
        cout << "Criptografia de Dados" << endl;
        cout << "\n 1- Criptografar texto" << endl;
        cout << "\n 2- Receber Arquivo" << endl;
        cout << "\n 3- Sair" << endl;
        cout << "\n Informe a Opcao desejada: ";
        cin >> opcao;

        switch(opcao){
    case 1:
        system("cls");
        Menu_Criptografar();
        break;
    case 2:
        system("cls");
        Receber_Arquivo();
        break;
    case 3:
        cout << "\nFinalizando.." << endl;
        system("pause");
        exit(0);
        break;
    default:
        cout << "\nOpcao invalida, tente novamente!" << endl;
        }
    }
}

int main()
{
    Menu();
    return 0;
}
