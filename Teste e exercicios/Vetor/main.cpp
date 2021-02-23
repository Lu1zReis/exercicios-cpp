#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void PercorrerNumeros(){
    int a[] = {2,4,5,3,5,3};
    int quantidade = 0;
    int b;
        cout << "defina um numero: ";
        cin >> b;

    for(int i=0; i<=6; i++){
         a[i];
        if (a[i] == b){
                while(i != 6){
        quantidade += 1;
            cout << "Existe " << quantidade << "x o numero " << b << endl;
            cout << "No vetor 'a'" << endl;
            system("pause");
            break;
            }
        }
    if(i >= 6){
        cout << "Finalizando sistema...\n";
    exit(0);
    }
}
}

void PercorrerLetras(){

    char a[5]={'L','u','i','z'};

    char b[5]={};

    cout << "Procure na agenda uma inicial: ";

    cin >> b[5];

    cout << endl;

    for(int i = 0; i <= 5; i++){

        a[i];

        if (a[i] == b[5]){

            cout << "Pertence a lista: " << a[i] << endl;
            cout << a[i] << endl;
            a[i]++;

        }
    }

}

int main()
{
    PercorrerLetras();
    return 0;
}
