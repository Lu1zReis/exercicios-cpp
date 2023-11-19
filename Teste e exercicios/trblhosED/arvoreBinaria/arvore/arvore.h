#ifndef _ARVORE_
#define _ARVORE_

#include <stdio.h>
#include <stdlib.h>

typedef struct _arvore_ {
    int info;
    struct _arvore_ *dir;
    struct _arvore_ *esq;
} NoArvore;

NoArvore *inicializa ();
int insereArvore (NoArvore **no, int info);
void percorreArvore (NoArvore *no);
NoArvore *removeNoArvore (NoArvore **no, int info);

#endif // _ARVORE_
