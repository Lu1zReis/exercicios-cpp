#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void tabu(){
    int b = 0;
    int c;
    cout << "Informe uma tabuada: ";
    cin >> c;
while(b<=10){
        int r;
        r = c*b;
        cout << c << "x" << b << "="<< r <<endl;
  b++;
  }
}

void menu(){
    while(1){
    int pass;
    system("cls");
cout << "Voce quer entrar ou sair?\n\n";
cout << "1 - Entrar\n\n";
cout << "2 - Sair\n\n";
    cin >> pass;
    switch(pass){
case 1:
    system("cls");
    tabu();
    system("pause");
    break;
case 2:
    system("cls");
    exit(0);
    break;
    }
  }
}

int main()
{
    menu();
    return 0;
}
