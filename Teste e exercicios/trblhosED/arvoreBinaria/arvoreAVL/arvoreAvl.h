#ifndef _ARVORE_AVL_
#define _ARVORE_AVL_

#include <stdio.h>
#include <stdlib.h>

typedef struct _arvore_avl_ {
        int info, h;
        struct _arvore_avl_ *dir, *esq;
} ArvoreAVL;

ArvoreAVL *inicializaArvAVL ();
ArvoreAVL *criaArvAVL (int info);
void insereArvAVL (ArvoreAVL **p, int info);
int removeArvAVL (ArvoreAVL **p, int info);
void percorreArvAVL (ArvoreAVL *p);
int verificaTamArvAVL (ArvoreAVL *p);
// função para retornar a conta do filho do nó p e assim verificar se precisa fazer as rotações
int verficaBalanceamentoNoAVL (ArvoreAVL **p, int info);
void rotacaoR (ArvoreAVL **p);
void rotacaoRR (ArvoreAVL **p);
void rotacaoL (ArvoreAVL **p);
void rotacaoLL (ArvoreAVL **p);
int calibraAltura(ArvoreAVL **p);

#endif
