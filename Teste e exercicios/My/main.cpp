#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

char write[100];

void cript(){
    cout << "Digite algo para criptografar: ";
    cin >> write;
    cout << "Palavra Criptografada: " <<strlen(write)*strlen(write) << endl;
    system("pause");
    system("cls");
}

void descript(){
        if(strlen(write)==0){
                cout << "Primeiro, criptografe antes de descriptografar\n\n";
            cript();
        }else{
         system("pause");
    cout << "A palavra digitada antes da criptografia era: ";
    cout << write << endl;
    system("pause");
    system("cls");
}
        }

void menu(){
    while(1){

    int a;

    cout << "O que voce deseja fazer?\n\n";
    cout << "1)Criptograr\n2)Descriptografar\n3)Sair\n: ";
    cin >> a;

switch(a){
    case 1:
        system("cls");
        cript();
        break;
    case 2:
        system("cls");
        descript();
        break;
    case 3:
        system("pause");
        exit(0);
        break;
    default:
        system("cls");
        cout << "Desculpe, comando invalido\n";
        system("pause");
        system("cls");

    }
}
}
int main()
{
    menu();

    return 0;
}
