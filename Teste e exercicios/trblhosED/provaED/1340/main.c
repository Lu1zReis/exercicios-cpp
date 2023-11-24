#include <stdio.h>
#include <stdlib.h>

struct TNO {
    int info;
    struct TNO *prox, *ant;
};

struct lista {
    int maior, menor;
    struct TNO *ult, *inicio;
};

typedef struct TNO PNO;
typedef struct lista Lista;

int procuraMenor (Lista *l) {
    int menor = 0; PNO *aux = l->inicio;
    if (l != NULL && aux != NULL) {
        menor = l->menor;
        while (aux != NULL) {
            if (aux->info < menor) menor = aux->info;
            aux = aux->prox;
        }
    }
    return menor;
}

int procuraMaior (Lista *l) {
    int maior = 0; PNO *aux = l->inicio;
    if (l != NULL && aux != NULL) {
        maior = l->maior;
        while (aux != NULL) {
            if (aux->info > maior) maior = aux->info;
            aux = aux->prox;
        }
    }
    return maior;
}

void adiciona (Lista **l, int info) {
    PNO *novo;
    novo = (PNO*) malloc(sizeof(PNO));
    if (*l == NULL) {
        printf("entrou\n");
        *l = (Lista*) malloc(sizeof(Lista));
        (*l)->inicio = novo;
        (*l)->ult    = novo;
        (*l)->maior  = info;
        (*l)->menor  = info;
        novo->prox   = NULL;
    }
    else {
        novo->prox  = (*l)->inicio;
        (*l)->inicio->ant = novo;
    }

    novo->info   = info;
    novo->ant    = NULL;
    (*l)->inicio = novo;
    if ((*l)->maior < info) (*l)->maior = info;
    if ((*l)->menor > info) (*l)->menor = info;
}

// para fazermos as simulações das remocoes
int escrevePilha (Lista *l) {
    if (l != NULL && l->inicio != NULL)
        return l->inicio->info;
}

int escreveFila (Lista *l) {
    if (l != NULL && l->inicio != NULL)
        return l->ult->info;
    else
        return 0;
}

int escreveFilaPrioridadeMaior (Lista *l) {
    if (l != NULL && l->inicio != NULL)
        return l->maior;
    else
        return 0;
}

int escreveFilaPrioridadeMenor (Lista *l) {
    if (l != NULL && l->inicio != NULL)
        return l->menor;
    else
        return 0;
}

// para fazermos as remoções
void removePilha (Lista **l) {
    PNO *aux;
    if (*l != NULL && (*l)->inicio != NULL)
    {
        aux = (*l)->inicio;
        (*l)->inicio = (*l)->inicio->prox;
        free(aux);
        if ((*l)->inicio != NULL) {
            (*l)->inicio->ant = NULL;
            if (aux->info == (*l)->maior) {
                (*l)->maior = procuraMaior(*l);
            }
            if (aux->info == (*l)->menor) {
                (*l)->menor = procuraMenor(*l);
            }
        } else free(*l);
    }
}

void removeFila (Lista **l) {
    PNO *p; int maior, menor, aux;
    if (*l != NULL && (*l)->inicio != NULL) {
        p = (*l)->ult;
        (*l)->ult = (*l)->ult->ant;
        if ((*l)->ult != NULL) {
            (*l)->ult->prox = NULL;
            if (p->ant->ant == NULL) (*l)->inicio = p->ant;
            aux = (*l)->ult->info;
            free(p);
            if (aux == (*l)->maior) {
                maior = procuraMaior(*l);
                (*l)->maior = maior;
            }
            if (aux == (*l)->menor) {
                menor = procuraMenor(*l);
                (*l)->menor = menor;
            }
        } else free (*l);
    }
}

void removeFilaPrioridadeMaior (PNO **p, Lista **l) {
    PNO *aux, *aux2;
    if (*l != NULL && *p != NULL) {
        if ((*p)->info == (*l)->maior) {
            aux = *p;
            if (aux->prox == NULL) {
                aux->ant->prox = NULL;
                free(*p);
                *p = aux;
            } else {
                if (aux->ant == NULL) {
                    *p = (*p)->prox;
                    (*p)->ant = NULL;
                    free(aux);
                } else {
                    aux2 = aux->ant;
                    aux2->prox = aux->prox;
                    aux->ant = aux2;
                    free(aux);
                }
            }
            if (*p != NULL) {
                (*l)->maior = procuraMaior(*l);
            } else {
                (*l)->maior = 0;
            }
        } else
            removeFilaPrioridadeMaior(&(*p)->prox, &(*l));
    }
}

int main()
{
    Lista *ptr = NULL;

    adiciona(&ptr, 10);
    adiciona(&ptr, 8);

    printf("Primeiro teste\n");
    printf("%d\n", escrevePilha(ptr));
    printf("%d\n", escreveFila(ptr));
    printf("%d\n", escreveFilaPrioridadeMaior(ptr));
    printf("%d\n", escreveFilaPrioridadeMenor(ptr));
    //printf("%d\n", ptr->ult->ant->info);

    removeFilaPrioridadeMaior(&ptr->inicio, &ptr);

    printf("Segundo teste\n");
    printf("%d\n", escrevePilha(ptr));
    printf("%d\n", escreveFila(ptr));
    printf("%d\n", escreveFilaPrioridadeMaior(ptr));
    printf("%d\n", escreveFilaPrioridadeMenor(ptr));


    return 0;
}
