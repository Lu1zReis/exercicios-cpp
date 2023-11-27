#include <stdio.h>
#include "arv.h"

TNoArvAVL *criaArvAVL (int info) {
    TNoArvAVL *no;
    no = (TNoArvAVL*) malloc (sizeof(TNoArvAVL));


    if (no != NULL) {
        no->info = info;
        no->h    = 1;
        no->dir  = NULL;
        no->esq  = NULL;
    }

}
