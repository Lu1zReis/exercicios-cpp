#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
char senha[100];
char senha2[100];

void definicao(){

    cout << "SENHA: ";
    cin >> senha;
    system("pause");
    system("cls");

     cout << "Coloque a senha: ";
     cin >> senha2;
      if(strcmp(senha, senha2)==0){
        system("pause");
        system("cls");
        cout << "senha correta\n\n";
        system("pause");
        system("cls");
      }
      else{
        cout << "senha errada\n\n";
        system("pause");
        system("cls");
      }

}
void menu(){
    int a;
    while(1){
    cout << "1)DEFINIR SENHA\n2)SAIR\n3)SENHA ATUAL\n: ";
    cin >> a;
    switch(a){
case 1:
    system("pause");
    system("cls");
     definicao();
     break;
case 2:
    system("pause");
    exit(0);
    break;
case 3:
    if(strcmp(senha, senha2)==0){
        cout << senha << endl;
    system("pause");
    system("cls");
    }else{
    cout << "defina uma senha\n";
    system("pause");
    system("cls");
    definicao();
    }
    break;
default:
    cout << "desculpe, numero invalido, tente novamente\n\n";
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
