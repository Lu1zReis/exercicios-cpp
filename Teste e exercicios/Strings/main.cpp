#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    //Básico
    /*
    char a[10];
    cout << "Passe uma frase: " << endl;
    gets(a);
    cout << "\nFrase: " << a << endl;
    */

    char a[100], b[100], c[100];
    cout << "\n\nPASSE O SEU NOME: ";
    gets(a);
    cout << "\n\nOUTRO NOME: ";
    gets(b);

    if(strcmp(a,b)==0){
        cout << "Nomes iguais\n\n";
    }else{
    cout << "Nomes diferentes!\n\n";
    }
    cout << strcat(a,b) << endl;

    cout << "numero de letras: "<< strlen(a)+strlen(b) << endl;

    return 0;
}
