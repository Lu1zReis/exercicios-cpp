#include <iostream>

using namespace std;

int main()
{
    // VARIAVEIS
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matriz2[3][3] = {};
    int i = 2, j = 2;

    // -- LAÇOS DE REPETIÇÃO --
    // LAÇO PARA FAZER A TROCA
    for(int k = 0; k < 3; k++){
        for(int t = 0; t < 3; t++){
            matriz2[k][t] = matriz[i][t]; // k vai começar da posição 0 da variavel matriz2 e i da última posição, nesse caso 2 da variavel
            // matriz e assim uma sobe a posição e outra desce, fazendo assim a troca
        }
    i--; // cada vez que sair do laço t i vai descer uma posição
        // a variavel t só vai passar os valores enquanto k e i que vão trocar as posições
    }
    for(int t = 0; t < 3; t++){
        for(int k = 2; k >= 0; k--){ /* nesse caso como eu quero que mostre os valores ao contrário, é só passar k-- para cada vez que t trocar
            k começar da última posição(2) e ir descendo passando os valores*/
            cout << matriz2[t][k] << endl;
        }
    }

    return 0;
}
