#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void hey(){
    /*struct Tipos{
        int idade;
        char nome;
    };
    struct Tipos pessoa[2];
    pessoa[0].idade=23;
    strcpy(pessoa[0].nome,"Marcos");

    pessoa[1].idade=24;
    strcpy(pessoa[1].nome,"Rafael");

    for(int i; i<2; i++){
        cout << "Pessoa: " << pessoa[i].nome << "Idade: " << pessoa[i].idade;
    }*/
    enum semana{Seg, Ter, Qua, Qui, Sex, Sab, Dom};
    int dias[7]={Seg, Ter, Qua, Qui, Sex, Sab, Dom};

    char nome[7][4]={"Dom","Seg","Ter","Qua","Qui","sex","Sab"};

    for(int i=0; i<7; i++){

        cout << "Dias: " << dias[i] << ":"<< nome[i]<< endl;
    }
}

int main()
{
    hey();
    return 0;
}
