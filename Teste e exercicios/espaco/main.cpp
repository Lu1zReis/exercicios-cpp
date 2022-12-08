#include<iostream>
using namespace std;

const int r = 2;
const int n = 2;
const int ESCALAR_A = 2;
const int ESCALAR_B = 1;


int soma(int *v, int *v2, int pos){
    return v[pos] + v2[pos];
}

bool axiomaE0(int *v) {
    int aux = 0;
    for(int i = 0; i < r; i++) {
        if(v[i] == 0) {
            aux++;
        }
    }
    if(aux > 0) {
        return true;
    }else {
        return false;
    }
}
//essa funçao cria um novo vetor
int novoVet(int *v, int *v2, int posi) {

    if(posi % 2 == 0) {
        return v[posi];
    } else {
        return v2[posi];
    }

}

int main()

{
    int espaco[r] = {};
    int vet[n] = {}, vet2[n] = {}, axioma[8] = {};

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
        cout << "os vetores não cumprem ao primeiro axioma\n";
        cout << "(u+v != r)" << endl;
    }

    // 2° axioma
    if(axiomaE0(vet)) {
        cout << "o vetor u cumpre ao segundo axioma" << endl;
        cout << "u(x1,x2...,0)" << endl;
    } else {
        if(axiomaE0(vet2)) {
            cout << "o vetor v cumpre ao segundo axioma" << endl;
            cout << "u(x1,x2,...,0)" << endl;
        } else {

            cout << "nenhum dos vetores cumprem ao segundo axioma" << endl;
            cout << "u(x1,x2,...)" << endl;
        }
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
        cout << "u + (-u) = 0" << endl;
    } else {
        cout << "os vetores não cumprem ao terceiro axioma" << endl;
        cout << "u + (-u) != 0" << endl;
    }

    //4o axioma
    for(int i = 0; i < r; i++) {

        if((novoVet(vet, vet2, i) + vet[i] + vet2[i]) <= espaco[i]) {
            axioma[3]++;
        }
//AXIOMA 4
    }
    if(axioma[3] >= r) {
        cout << "os vetores cumprem ao quarto axioma" << endl;
        cout << "u+(v+w) = r" << endl;
    } else {

        cout << "os vetores nao cumprem ao quarto axioma" << endl;
        cout << "u+(v+w) != r" << endl;

    }
    // === AXIOMAS DA MULTIPLICACAO ===
    // 5o axioma
    if(axiomaE0(vet)) {
        for(int j = 0; j < r; j++) {
            if((vet[j] * ESCALAR_A * ESCALAR_B) <= espaco[j]) {
                axioma[4]++;
            }
        }

    } else {

        if(axiomaE0(vet2)) {

            for(int j = 0; j < r; j++) {
                if((vet2[j] * ESCALAR_A * ESCALAR_B) <= espaco[j]) {
                    axioma[4]++;
                }
            }

        } else {

            for(int j = 0; j < r; j++) {
                if((vet[j] * ESCALAR_A * ESCALAR_B) <= espaco[j]) {
                    axioma[4]++;
                }
            }
        }
    }

    if(axioma[4] >= r) {
        cout << "o vetor cumpre ao quinto axioma" << endl;
        cout << "u*(a*b) = r" << endl;
    } else {
        cout << "o vetor não cumpre ao quinto axioma" << endl;
        cout << "u*(a*b) = r" << endl;
    }

    // 6o axioma
    cout << "o vetor cumpre ao sexto axioma" << endl;
    cout << "1*v = r" << endl;

    // 7o axioma
    for(int i = 0; i < r; i++) {

        if((soma(vet, vet2, i) * ESCALAR_A) <= espaco[i]) {
            axioma[6]++;
        }

    }

    if(axioma[6] >= r) {

        cout << "o vetor cumpre ao sétimo axioma" << endl;
        cout << "a(u + v) = r" << endl;

    } else {

        cout << "o vetor nao cumpre ao sétimo axioma" << endl;
        cout << "a(u + v) != r" << endl;

    }

    // axioma 8
    for(int i = 0; i < r; i++) {

        if((vet[i] * (ESCALAR_A + ESCALAR_B)) <= espaco[i]) {
            axioma[7]++;
        }

    }

    if(axioma[7] >= r) {

        cout << "o vetor cumpre ao oitavo axioma" << endl;
        cout << "u(a + b) = r" << endl;

    } else {

        cout << "o vetor nao cumpre ao oitavo axioma" << endl;
        cout << "u(a + b) != r" << endl;

    }


    return 0;
}

