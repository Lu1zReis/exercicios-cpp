#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"


int main()
{
    NoArvore *no;
    no = inicializa();
    insereArvore(&no, 11);
    insereArvore(&no, 6);
    insereArvore(&no, 7);
    insereArvore(&no, 9);
    insereArvore(&no, 8);
    insereArvore(&no, 5);
    insereArvore(&no, 22);
    percorreArvore(no);
    //removeNoArvore(&no, 7);
    removeNoArvore(&no, 11);
    printf("\n");
    percorreArvore(no);

/*
    int i;
    // nums primo
    for (i = 0; i < 100; i++) if ((i % 2 != 0 && i % 3 != 0) || i == 3) printf("-> %d ", i);
*/

    return 0;
}
