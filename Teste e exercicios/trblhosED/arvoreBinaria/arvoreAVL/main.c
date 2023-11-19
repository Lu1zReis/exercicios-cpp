#include <stdio.h>
#include "arvoreAvl.h"

int main () {

    ArvoreAVL *p;
    p = inicializaArvAVL();
    insereArvAVL(&p, 2);
    calibraAltura(&p);
    verficaBalanceamentoNoAVL(&p, 2);
    calibraAltura(&p);

    insereArvAVL(&p, 4);
    calibraAltura(&p);
    verficaBalanceamentoNoAVL(&p, 4);
    calibraAltura(&p);

    insereArvAVL(&p, 3);
    calibraAltura(&p);
    verficaBalanceamentoNoAVL(&p, 3);
    calibraAltura(&p);

    percorreArvAVL(p);
    printf("\n");

    return 0;
}
