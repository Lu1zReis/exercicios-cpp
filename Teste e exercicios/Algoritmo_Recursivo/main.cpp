#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int dividir(int vetor[], int esq, int dir){
    int aux;
    int cont = esq;

    for(int i = esq+1; i<=dir; i++){
        if(vetor[i]<vetor[esq]){
            cont++;
            aux = vetor[i];
            vetor[i] = vetor[cont];
            vetor[cont] = aux;
        }
    }
    aux = vetor[esq];
    vetor[esq] = vetor[cont];
    vetor[cont] = aux;

    return cont;
}

void quick(int vetor[], int esq, int dir){
    int pos;

    if(esq<dir){
        pos = dividir(vetor, esq, dir);
        quick(vetor, esq, pos-1);
        quick(vetor, pos+1, dir);
    }
}

int main()
{
    int vetor[] = {0, 2, 6, 3, 1, 5, 4, 9, 7, 10, 8};
    int n = 10;
    int i = 0;

    quick(vetor, 0, n);
    while(i < n){
            i++;
    cout << vetor[i] << endl;
}

    system("pause");
    return 0;
}
