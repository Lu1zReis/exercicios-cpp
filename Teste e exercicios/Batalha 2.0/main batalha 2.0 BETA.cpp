#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

void player(){
    int tentativa=0;
    int playerInt1={};
    int playerInt2={};
    char playerChar1={};
    char playerChar2={};

    int jogadorInt[2];
    char jogadorChar[2];

    int jogadorInt2[2];
    char jogadorChar2[2];

    int a=0;
    int b=0;

    cout << "Defina as posicoes, JOGADOR 1\n";
    cout << "Linha(A,B,C,D,E): ";
    cin >> jogadorChar[0];
    cout << "Coluna(1,2,3,4,5): ";
    cin >> jogadorInt[0];
    cout << "\n";
    cout << "Linha 2(A,B,C,D,E): ";
    cin >> jogadorChar[1];
    cout << "Coluna 2(1,2,3,4,5): ";
    cin >> jogadorInt[1];

    cout << "\nAs suas posicoes foram definidas para: ";
    cout << jogadorChar[0] << "-" <<jogadorInt[0] << " & ";
    cout << jogadorChar[1] << "-" <<jogadorInt[1] << endl;


    system("pause");
    system("cls");

    cout << "Defina as posicoes, JOGADOR 2\n";
    cout << "Linha(A,B,C,D,E): ";
    cin >> jogadorChar2[0];
    cout << "Coluna(1,2,3,4,5): ";
    cin >> jogadorInt2[0];
    cout << "\n";
    cout << "Linha 2(A,B,C,D,E): ";
    cin >> jogadorChar2[1];
    cout << "Coluna 2(1,2,3,4,5): ";
    cin >> jogadorInt2[1];

    cout << "\nAs suas posicoes foram definidas para: ";
    cout << jogadorChar2[0] << "-" <<jogadorInt2[0] << " & ";
    cout << jogadorChar2[1] << "-" <<jogadorInt2[1] << " & ";
    system("pause");
    system("cls");
while(1){
        tentativa+=1;
    cout << "\t\t" <<tentativa << " TENTATIVA DE ATAQUE(S)\n";
    cout << "\t\t   1   2   3   4   5 " << endl;
    cout << "\t\t     |   |   |   |   " << endl;
    cout << "\t\tA ___|___|___|___|___" << endl;
    cout << "\t\t     |   |   |   |   " << endl;
    cout << "\t\tB ___|___|___|___|___\tJOGADOR 1 TEM: "<< a << " ponto(s)" << endl;
    cout << "\t\t     |   |   |   |   " << endl;
    cout << "\t\tC ___|___|___|___|___\tJOGADOR 2 TEM: " << b << " ponto(s" << endl;
    cout << "\t\t     |   |   |   |   " << endl;
    cout << "\t\tD ___|___|___|___|___" << endl;
    cout << "\t\t     |   |   |   |   " << endl;
    cout << "\t\tE    |   |   |   |   " << endl;

    if(a>=2 || b>=2){
        if(a>=2){
        system("pause");
        system("cls");
            cout << "JOGADOR 1 GANHADOR" << endl;
            system("pause");
            exit(0);
        }else if(b>=2){
        system("pause");
        system("cls");
        cout << "JOGADOR 2 GANHADOR" << endl;
        system("pause");
        exit(0);
        }}

    cout << "\nVEZ DO JOGADOR 1(defina as posicoes para derrubar o navio do Jogador 2)\n";
    cout << "Linha(A,B,C,D,E): ";
    cin >> playerChar1;
    cout << "\nColuna(1,2,3,4,5): ";
    cin >> playerInt1;

    if(playerChar1==jogadorChar2[0] & playerInt1==jogadorInt2[0]){
       a+=1;
       cout << "\n\t\t-<TIRO CERTO>-\n";
    }
    else if(playerChar1==jogadorChar2[1] & playerInt1==jogadorInt2[1]){
        a+=1;
        cout << "\n\t\t-<TIRO CERTO>-\n";
    }
    else{
    cout << "\n\t\t-<TIRO ERRADO>-\n";

    }
    cout << "\nVoce tem: " << a << " Ponto(s)\n\n";

    cout << "\nVEZ DO JOGADOR 2(defina as posicoes para derrubar o navio do Jogador 1)\n";
    cout << "Linha(A,B,C,D,E): ";
    cin >> playerChar2;
    cout << "\nColuna(1,2,3,4,5): ";
    cin >> playerInt2;

    if(playerChar2==jogadorChar[0] & playerInt2==jogadorInt[0]){
       b+=1;
       cout << "\n\t\t-<TIRO CERTO>-\n";
    }
    else if(playerChar1==jogadorChar2[1] & playerInt1==jogadorInt2[1]){
        b+=1;
        cout << "\n\t\t-<TIRO CERTO>-\n";
    }
    else{
    cout << "\n\t\t-<TIRO ERRADO>-\n";

    }
    cout << "\nVoce tem: " << b << " Ponto(s)\n\n";
system("pause");
system("cls");
    }
}


void menu(){
    int opcao;
    cout << "Bem vindo ao Batalha Naval 2.0\n";
    cout << "Voce deseja\n1)JOGAR\n2)SAIR\nDigite aqui: ";
    cin >> opcao;
    switch(opcao){
case 1:
    system("pause");
    system("cls");
    player();
    break;
case 2:
    cout << "\nFinalizando...\n";
    system("pause");
    exit(0);
    break;
default:
    cout << "\nOpcao Invalida!\n";
    system("pause");
    system("cls");
    menu();

    }

}

int main()
{
    menu();
    return 0;
}
