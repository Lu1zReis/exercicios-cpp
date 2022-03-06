#include <iostream>
int rodada=0; // para sabermos a rodada da recursao
using namespace std;
int particiona(int *V, int inicio, int fim) {

    int esq, dir, pivo, aux;
    esq = inicio;
    dir = fim;
    pivo = V[inicio];

    while(esq < dir) {

        /* TRECHO DE CÓDIGO PARA ANALISE SOMENTE */
        cout <<"RODADA: "<< rodada << endl;
        rodada++;
        cout << "esq: " << esq << "e dir: " << dir << endl;
        cout << "__________" << endl;
        for(int i=0; i<6; i++)
            cout << V[i] << endl;
        cout << "__________" << endl;
        /*----------------------------------------*/

        while(V[esq] <= pivo)
            esq++;
        while(V[dir] > pivo)
            dir--;
        if(esq < dir) {
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
        cout << "V[esq]: " << V[esq] << endl;
        cout << "V[dir]: " << V[dir] << endl;
        cout << "=======================" << endl;
    }

    V[inicio]=V[dir];
    V[dir]=pivo;

    cout << "V[inicio]: " << V[inicio] << endl;
    cout << "V[dir]: " << V[dir] << endl;

    return dir;

}
void quicksort(int *V, int inicio, int fim) {

    int pivo;
    if(fim > inicio) {
        pivo = particiona(V, inicio, fim);
        cout << "PIVO: " << pivo << endl;
        cout << "INICIO: " << inicio << endl;
        cout << "FIM: " << fim << endl;
        quicksort(V, inicio, pivo-1);
        quicksort(V, pivo+1, fim);
    }

}

int main()
{
    int vet[6]={5, 1, 4, 3, 0, 90};
    quicksort(vet,0,6);

    cout << "____________" << endl;
    for(int i=0; i<6; i++)
        cout << vet[i] << endl;

    return 0;
}
