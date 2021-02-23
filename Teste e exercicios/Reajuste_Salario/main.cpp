#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{

    float salario, reajuste;

    cin >> salario;

    if(salario <= 400){
        reajuste = salario * 0.15;
        cout << "Novo salario: " << reajuste + salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 15%" << endl;
    }

    if(salario > 400 and salario <= 800){
        reajuste = salario * 0.12;
        cout << "Novo salario: " << reajuste + salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 12%" << endl;
    }

    if(salario > 800 and salario <= 1200){
        reajuste = salario * 0.10;
        cout << "Novo salario: " << reajuste + salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 10%" << endl;
    }

    if(salario > 1200 and salario <= 2000){
        reajuste = salario * 0.07;
        cout << "Novo salario: " << reajuste + salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 7%" << endl;
    }

    if(salario > 2000){
        reajuste = salario * 0.04;
        cout << "Novo salario: " << reajuste + salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 4%" << endl;
    }

    return 0;
}
