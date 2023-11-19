#include "arvoreAvl.h"

int maior (int a, int b) {
    if (a > b) return a;
    else return b;
}

ArvoreAVL *inicializaArvAVL () {
    return NULL;
}

ArvoreAVL *criaArvAVL (int info) {
    ArvoreAVL *t;
    t = (ArvoreAVL*) malloc (sizeof(ArvoreAVL));
    t->info = info;
    t->dir  = NULL;
    t->esq  = NULL;
    t->h    = 1;
    return t;

}

void rotacaoR (ArvoreAVL **p) {
    ArvoreAVL *raizAnt, *novaRaiz, *aux;
    novaRaiz = (*p)->esq;
    raizAnt  = (*p);
    raizAnt->esq  = novaRaiz->dir;
    novaRaiz->dir = raizAnt;
    (*p) = novaRaiz;
}

void rotacaoL (ArvoreAVL **p) {
    ArvoreAVL *raizAnt, *novaRaiz;
    novaRaiz      = (*p)->dir;
    raizAnt       = (*p);
    raizAnt->dir  = novaRaiz->esq;
    novaRaiz->esq = raizAnt;
    (*p) = novaRaiz;
}

void rotacaoRR (ArvoreAVL **p) {
    ArvoreAVL *novoMeio, *novoFinal;
    novoFinal      = (*p)->esq;
    novoMeio       = novoFinal->dir;
    (*p)->esq      = novoMeio;
    novoMeio->esq  = novoFinal;
    novoFinal->dir = NULL;
    rotacaoR(&(*p));
}

void rotacaoLL (ArvoreAVL **p) {
    ArvoreAVL *novoMeio, *novoFinal;
    novoFinal      = (*p)->dir;
    novoMeio       = novoFinal->esq;
    (*p)->dir      = novoMeio;
    novoMeio->dir  = novoFinal;
    novoFinal->esq = NULL;
    rotacaoL(&(*p));
}


// função para retornar a conta do filho do nó p e assim verificar se precisa fazer as rotações
// vamos ir até info, e se ele chegar em info e não ver nada desbalanceado está correto

int verficaBalanceamentoNoAVL (ArvoreAVL **p, int info) {
    int dif;
    if (*p == NULL) return 0;
    else {
        dif = verificaTamArvAVL((*p)->esq) - verificaTamArvAVL((*p)->dir);
        if (dif >= -1 && dif <= 1) {
            if (info < (*p)->info) return verficaBalanceamentoNoAVL(&(*p)->esq, info);
            else return verficaBalanceamentoNoAVL(&(*p)->dir, info);
        } else if (dif > 1) {
            if ((*p)->esq->esq != NULL) rotacaoR(&(*p));
            else rotacaoRR(&(*p));
            return 1;
        } else {
            if ((*p)->dir->dir != NULL) rotacaoL(&(*p));
            else rotacaoLL(&(*p));
            return 1;
        }
    }
}

int verificaTamArvAVL (ArvoreAVL *p) {
    if (p == NULL) return 0;
    else return p->h;
}

void insereArvAVL (ArvoreAVL **p, int info) {
    int maiorAlt;
    if (*p == NULL) {
        *p = criaArvAVL(info);
    }
    else if (info < (*p)->info) {
        insereArvAVL(&(*p)->esq, info);
    }
    else {
        insereArvAVL(&(*p)->dir, info);
    }
}

/*
int removeArvAVL (ArvoreAVL **p, int info);
*/

int calibraAltura (ArvoreAVL **p) {
    int a, b;
    if (*p == NULL) return 0;
    else {
        a = calibraAltura(&(*p)->esq)+1;
        b = calibraAltura(&(*p)->dir)+1;
        (*p)->h = maior(a,b);
        return maior(a,b);
    }

}

void percorreArvAVL (ArvoreAVL *p) {
    if (p != NULL) {
        percorreArvAVL(p->esq);
        printf("-> %d (%d)", p->info, p->h);
        percorreArvAVL(p->dir);
    }
}

