#include <iostream>

using namespace std;

int main()
{
    // VARIAVEIS
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matriz2[3][3] = {};
    int i = 2, j = 2;

    // -- LA�OS DE REPETI��O --
    // LA�O PARA FAZER A TROCA
    for(int k = 0; k < 3; k++){
        for(int t = 0; t < 3; t++){
            matriz2[k][t] = matriz[i][t]; // k vai come�ar da posi��o 0 da variavel matriz2 e i da �ltima posi��o, nesse caso 2 da variavel
            // matriz e assim uma sobe a posi��o e outra desce, fazendo assim a troca
        }
    i--; // cada vez que sair do la�o t i vai descer uma posi��o
        // a variavel t s� vai passar os valores enquanto k e i que v�o trocar as posi��es
    }
    for(int t = 0; t < 3; t++){
        for(int k = 2; k >= 0; k--){ /* nesse caso como eu quero que mostre os valores ao contr�rio, � s� passar k-- para cada vez que t trocar
            k come�ar da �ltima posi��o(2) e ir descendo passando os valores*/
            cout << matriz2[t][k] << endl;
        }
    }

    return 0;
}
