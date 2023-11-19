#include "arvore.h"


NoArvore *inicializa ()
{
    return NULL;
}

int insereArvore (NoArvore **no, int info)
{
        if (*no == NULL) {
            (*no) = (NoArvore*) malloc (sizeof(NoArvore));
            if (*no == NULL) return 0;
            (*no)->info = info;
            (*no)->esq  = NULL;
            (*no)->dir  = NULL;
            return 1;
        } else {
            if ((*no)->info > info) return insereArvore(&((*no)->esq), info);
            else return insereArvore(&(*no)->dir, info);
        }
}

void percorreArvore (NoArvore *no)
{
    if (no != NULL) {
        percorreArvore(no->esq);
        printf(" -> %d", no->info);
        percorreArvore(no->dir);
    }
}


NoArvore *removeNoArvore (NoArvore **no, int info)
{
    NoArvore *aux = *no, *aux2;
    if (no == NULL) {
        return NULL;
    } else {
        if ((*no)->info == info) {
            // caso de no folha (facil)
            if ((*no)->esq == NULL && (*no)->dir == NULL) {
                free(*no);
                return NULL;
            }
            // caso de um no seja nulo (medio)
            else if ((*no)->esq == NULL || (*no)->dir == NULL) {
                if ((*no)->esq != NULL) {
                    aux = aux->esq;
                    free(*no);
                    return aux;
                } else {
                    aux = aux->dir;
                    free(*no);
                    return aux;
                }
            }
            // caso de um no que tenha dois filhos (mais dificil)
            else {
                aux = aux->esq;
                if (aux->dir == NULL) {
                    (*no)->info = aux->info;
                    aux->info = info;
                    aux2 = aux->esq;
                    free(aux);
                    (*no)->esq = aux2;
                } else {
                    while (aux->dir != NULL) {
                        aux2 = aux;
                        aux = aux->dir;
                    }
                    (*no)->info = aux->info;
                    aux->info = info;
                    aux2->dir = aux->esq;
                    free(aux);
                }
                return *no;
            }
        } else {
            if ((*no)->info > info) aux->esq = removeNoArvore(&(*no)->esq, info);
            else aux->dir = removeNoArvore(&(*no)->dir, info);
            return aux;
        }
    }
}
