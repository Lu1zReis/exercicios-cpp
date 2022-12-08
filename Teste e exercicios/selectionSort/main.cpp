#include <iostream>

int const n = 10;

using namespace std;

void selectionSort(int *vetor) {
    int menor, aux, pos = 0;

    for(int i = 0; i < n; i++) {
        menor = i;
        for(int j = i; j < n; j++) {
            if(vetor[j] < vetor[menor]) {
                menor = j;
            }
        }

        aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;
    }

    for(int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
}

int main()
{
    int vetor[n];

    for(int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    for(int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }

    cout << "\n";

    selectionSort(vetor);

    return 0;
}
