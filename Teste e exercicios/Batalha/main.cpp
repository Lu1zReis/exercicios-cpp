#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
int c;
int d;
int e;
int f;

void definir(){
    cout << "Essa batalha e 3x3 entao na coluna e na linha, o maximo que pode se adicionar e 3!!\n\n";
    cout << "<----- BATALHA NAVAL ----->\n";
        cout << "\n     1    2    3 " << endl;
cout << " 1 " <<"    |     |   " << endl;
cout << "   " <<"--- | --- |---" << endl;
cout << " 2 " <<"    |     |   " << endl;
cout << "   " <<"--- | --- |---" << endl;
cout << " 3 " <<"    |     |   \n" << endl;

    cout << "Defina as posicoes Player 1: "<< endl;
    cout << "Linha: ";
    cin >> c;
    cout << "coluna: ";
    cin >> d;
    system("pause");
    system("cls");

        cout << "\n     1    2    3 " << endl;
cout << "1 " <<"    |     |   " << endl;
cout << "  " <<"--- | --- |---" << endl;
cout << "2 " <<"    |     |   " << endl;
cout << "  " <<"--- | --- |---" << endl;
cout << "3 " <<"    |     |   \n" << endl;

    cout << "Defina as posicoes Player 2: "<< endl;
    cout << "Linha: ";
    cin >> e;
    cout << "coluna: ";
    cin >> f;
    system("pause");
    system("cls");
}

void player(){
int a;
int b;
    cout << "\nPlayer1\n";
    cout << "\nLinha: ";
    cin >> a;
    cout << "Coluna: ";
    cin >> b;
    cout << a << ":"<< b << endl;

    if(a==e & b==f){
            while(1){
    cout << "\nJogadas: " << a<<":"<<b<<endl;
    break;
    }

        cout << "\n----Barco Afundado----\n\n";
        system("pause");
        system("cls");
        cout << "PLAYER 1 GANHADOR" << endl;
        system("pause");
        system("cls");
        definir();
    }else{
    cout << "\n----Tiro Errado----\n\n";
    }

}

void player2(){
    int a;
    int b;
    cout << "\nPLAYER 2 \n";
    cout << "\nLinha: ";
    cin >> a;
    cout << "Coluna: ";
    cin >> b;
    cout << a << ":"<< b << endl;

    if(a==c & b==d){
    while(1){
    cout << "\nJogadas: " << a<<":"<<b<<endl;
    break;
    }
        cout << "\n----Barco Afundado----\n\n";
        system("pause");
        system("cls");
        cout << "PLAYER 2 GANHADOR" << endl;
        system("pause");
        system("cls");
    definir();
    }else{
    cout << "\n----Tiro Errado----\n\n\n";
    }
}

void tela(){
    cout << "<----- BATALHA NAVAL ----->\n";
    cout << "     1    2    3 " << endl;
cout << " 1 " <<"    |     |   " << endl;
cout << "   " <<"--- | --- |---" << endl;
cout << " 2 " <<"    |     |   " << endl;
cout << "   " <<"--- | --- |---" << endl;
cout << " 3 " <<"    |     |   " << endl;
}

int main()
{
definir();
    while(1){
    tela();
    player();
    player2();
    system("pause");
    system("cls");
    }

    return 0;
}
