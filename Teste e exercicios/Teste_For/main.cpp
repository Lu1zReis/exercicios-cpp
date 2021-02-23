#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void bubble(int vetor[], int n){
    int k = n;
    int aux;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){

            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
        k--;
    }
}

int main()
{
    int vetor[]={0,4,3,1,5,2,7,9,8,6};
    int n = 9;
    bubble(vetor, n);
    for(int i = 0; i<n; i++){
        printf("%d - ", vetor[i]);
    }

    return 0;
}
