#include <stdio.h>
#include <stdlib.h>

struct TNO {
    int info;
    struct TNO *prox;
};

struct lista {
    int maior, menor;
    struct TNO *ult, *inicio;
};

typedef struct TNO PNO;
typedef struct lista Lista;

int procuraMaior (Lista *l) {
    int maior = 0;
    while (l != NULL) {
        if (l->info > maior) maior = l->info;
    }
    return maior;
}

void adiciona (Lista **l, int info) {
    PNO *novo;
    novo = (PNO*) malloc(sizeof(PNO));
    if (*l == NULL) {
        *l = (Lista*) malloc(sizeof(Lista))
        (*l)->inicio = NULL;
        (*l)->ult    = novo;
        (*l)->maior  = info;
        (*l)->menor  = info;
    }
    novo->info   = info;
    novo->prox   = (*l)->inicio;
    (*l)->inicio = novo;
    if ((*l)->maior < info) (*l)->maior = info;
    if ((*l)->menor > info) (*l)->menor = info;
}

// para fazermos as simulações das remocoes
int escrevePilha (Lista **l) {
    if (*l != NULL && (*l)->inicio != NULL)
        return (*l)->inicio->info;
}

int escreveFila (Lista **l) {
    if (*l != NULL && (*l)->inicio != NULL)
        return (*l)->ult->info;
    else
        return 0;
}

int escreveFilaPrioridadeMaior (Lista **l) {
    if (*l != NULL && (*l)->inicio != NULL)
        return (*l)->maior->info;
    else
        return 0;
}

int escreveFilaPrioridadeMenor (Lista **l) {
    if (*l != NULL && (*l)->inicio != NULL)
        return (*l)->menor->info;
    else
        return 0;
}

// para fazermos as remoções
void removePilha (Lista **l) {

}

void removeFila (Lista **l) {

}

void removeFilaPrioridade (Lista **l) {

}

int main()
{
    printf("Hello world!\n");
    return 0;
}
