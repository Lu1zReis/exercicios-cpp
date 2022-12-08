#include<iostream>
using namespace std;
int r = 2;
int n = 2;


int soma(int *v, int *v2, int pos){
    return v[pos] + v2[pos];
}

int main()

{
    int espaco[r];
    int vet[n], vet2[n], axioma[8];

    cout << "======Espaco Vetorial======\n";
    // lendo o espaco vetorial
    cout << "vetor R'n'" << endl;
    for(int i = 0; i < r; i++) {
        cin >> espaco[i];
    }
    // lendo os vetores desse espaco
    cout << "vetor u do R'n'" << endl;
    for(int i = 0; i < r; i++) {
        cin >> vet[i];
    }
    cout << "vetor v do R'n'" << endl;
    for(int i = 0; i < r; i++) {
        cin >> vet2[i];
    }

    // 1° axioma
    for(int i = 0; i < r; i++) {

        if(soma(vet, vet2, i) <= espaco[i]) {
            axioma[0]++;
        }

    }
    if(axioma[0] >= r) {
        cout << "os vetores cumprem ao primeiro axioma\n";
        cout << "(u+v = r)" << endl;
    } else {
        cout << "os vetores cumprem ao primeiro axioma\n";
        cout << "(u+v = r)" << endl;
    }

    // 2° axioma
    for(int i = 0; i < r; i++) {

        if(vet[i] == 0 or vet2[i] == 0) {
            axioma[1]++;
        }

    }
    if(axioma[1] > 0) {
        cout << "um dos vetores cumprem ao segundo axioma" << endl;
        cout << "u(x1,x2...,0)" << endl;
    } else {
        cout << "um dos vetores cumprem ao segundo axioma" << endl;
        cout << "u(x1,x2...,0)" << endl;
    }

    // 3o axioma
    for(int i = 0; i < r; i++) {
        int valor = espaco[i];

        for(int j = 0; j <= valor; j++) {
            if((soma(vet, vet2, i) - j) == 0) {
                axioma[2]++;
            }
        }

    }
    if(axioma[2] >= r) {
        cout << "os vetores cumprem ao terceiro axioma" << endl;
        cout << "u + (-u)" << endl;
    } else {
        cout << "os vetores não cumprem ao terceiro axioma" << endl;
        cout << "u + (-u)" << endl;
    }

    //4o axioma

    return 0;
}
