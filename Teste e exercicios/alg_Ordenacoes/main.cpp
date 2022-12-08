#include <iostream>

int const n = 5;

using namespace std;

void insertionSort(int *vetor) {

    int aux, j;
    for(int i = 1; i < n; i++) {
        aux = vetor[i];
        j = i - 1;

        while((j >= 0) && (aux < vetor[j])) {
            vetor[j+1] = vetor[j];
            j--;
        }

        vetor[j+1] = aux;
    }


    for(int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }

}


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

    //cout << "SELECTION SORT" << endl;
    //selectionSort(vetor);
    //cout << "INSERTION SORT" << endl;
    //insertionSort(vetor);

    return 0;
}
