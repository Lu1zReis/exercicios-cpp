#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
//variaveis locais
int matriz[3][3], i, j;

/*Esse c�digo ir� funcionar da seguinte forma: i vai incrementar sempre mais um, isso quer dizer
que como se fosse uma linha i e uma coluna j, a linha i que vai pular para a linha 2 por exemplo
mas s� quando o j terminar de incrementar, ele vai para i e assim por diante. E j vai sempre come�ar
do 0*/

    for(i = 0; i < 3; i++){//esse indice i ir� percorrer a linha
        for(j = 0; j < 3; j++){//esse indice j ir� percorrer a linha
            printf("Matriz [%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
printf("\n*********Saida de Dados*********\n");

    for(i = 0; i < 3; i++){//esse indice i ir� percorrer a linha
        for(j = 0; j < 3; j++){//esse indice j ir� percorrer a linha
            printf("Matriz [%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }

    return 0;
}
