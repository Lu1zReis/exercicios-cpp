#include <stdio.h>
#include <stdlib.h>

/* Estrutura para nó */
struct TNO {
    int info;
    struct TNO *prox, *ant;
};

/* Estrutura para pilha */
struct _pilha_ {
    struct TNO *inicio;
};

typedef struct TNO PNO;
typedef struct _pilha_ Pilha;

<<<<<<< HEAD
/* Estrutura para fila */
struct _fila_ {
    struct TNO *ult, *inicio;
};

typedef struct _fila_ Fila;

/* Estrutura para fila de prioridade */
struct _filaPrioridade_ {
    struct TNO *inicio, *maior, *menor;
};

typedef struct _filaPrioridade_ Prioridade;

/* Função para adicionar elemento à pilha */
void adicionaPilha(Pilha **l, int info) {
    PNO *novo = (PNO*)malloc(sizeof(PNO));
    novo->info = info;
    novo->ant = NULL;
    if (*l == NULL) {
        *l = (Pilha*)malloc(sizeof(Pilha));
        (*l)->inicio = novo;
        novo->prox = NULL;
    } else {
        novo->prox = (*l)->inicio;
        if ((*l)->inicio != NULL) {
            (*l)->inicio->ant = novo;
        }
    }

=======
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
//aux
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
>>>>>>> 645ffa220898e1ce807cb977662f9b970750f216
    (*l)->inicio = novo;
}

<<<<<<< HEAD
/* Função para ler o topo da pilha */
int escrevePilha(Pilha *l) {
    if (l != NULL && l->inicio != NULL)
        return l->inicio->info;
=======
// para fazermos as simulações das remocoes
int escrevePilha (Lista *l) {
    if (l != NULL && l->inicio != NULL)
        return l->inicio->info;
}

int escreveFila (Lista *l) {
    if (l != NULL && l->inicio != NULL)
        return l->ult->info;
>>>>>>> 645ffa220898e1ce807cb977662f9b970750f216
    else
        return 0;
}

<<<<<<< HEAD
/* Função para remover elemento da pilha */
void removePilha(Pilha **l) {
    if (*l != NULL && (*l)->inicio != NULL) {
        PNO *aux = (*l)->inicio;
        (*l)->inicio = (*l)->inicio->prox;
        if ((*l)->inicio != NULL) {
            (*l)->inicio->ant = NULL;
        } else {
            free(*l);
            *l = NULL;
        }
        free(aux);
    }
}

/* Função para adicionar elemento à fila */
void adicionaFila(Fila **l, int info) {
    PNO *novo = (PNO*)malloc(sizeof(PNO));
    novo->info = info;
    novo->ant = NULL;
    if (*l == NULL) {
        *l = (Fila*)malloc(sizeof(Fila));
        (*l)->inicio = novo;
        (*l)->ult = novo;
        novo->prox = NULL;
    } else {
        novo->prox = (*l)->inicio;
        if ((*l)->inicio != NULL) {
            (*l)->inicio->ant = novo;
        }
    }

    (*l)->inicio = novo;
}

/* Função para ler o final da fila */
int escreveFila(Fila *l) {
    if (l != NULL && l->inicio != NULL)
        return l->ult->info;
=======
int escreveFilaPrioridadeMaior (Lista *l) {
    if (l != NULL && l->inicio != NULL)
        return l->maior;
>>>>>>> 645ffa220898e1ce807cb977662f9b970750f216
    else
        return 0;
}

<<<<<<< HEAD
/* Função para remover elemento da fila */
void removeFila(Fila **l) {
    if (*l != NULL && (*l)->inicio != NULL) {
        PNO *p = (*l)->ult;
        if ((*l)->ult != NULL) {
            (*l)->ult = (*l)->ult->ant;
            if ((*l)->ult != NULL) {
                (*l)->ult->prox = NULL;
                if (p->ant->ant == NULL)
                    (*l)->inicio = p->ant;
            } else {
                (*l)->inicio = NULL;
            }

            free(p);
        } else {
            free(*l);
            *l = NULL;
        }
    }
}

/* Função para adicionar elemento à fila de prioridade */
void adicionaFP(Prioridade **fp, int info) {
    PNO *novo = (PNO*)malloc(sizeof(PNO));
    novo->info = info;
    novo->prox = NULL;
    novo->ant = NULL;

    if (*fp == NULL) {
        *fp = (Prioridade*)malloc(sizeof(Prioridade));
        (*fp)->inicio = novo;
        (*fp)->maior = novo;
        (*fp)->menor = novo;
    } else {
        PNO *aux = (*fp)->inicio, *aux2 = NULL;

        while (aux != NULL && info < aux->info) {
            aux2 = aux;
            aux = aux->prox;
        }

        if (aux == NULL) {
            aux2->prox = novo;
            (*fp)->menor = novo;
        } else {
            if (aux2 == NULL) {
                (*fp)->maior = novo;
            }

            novo->prox = aux;
            if (aux2 != NULL) {
                aux2->prox = novo;
            }
            novo->ant = aux2;
            aux->ant = novo;
        }
    }
}

/* Função para ler o maior valor da fila de prioridade */
int escreveFilaPrioridadeMaior(Prioridade *l) {
    if (l != NULL && l->inicio != NULL)
        return l->maior->info;
=======
int escreveFilaPrioridadeMenor (Lista *l) {
    if (l != NULL && l->inicio != NULL)
        return l->menor;
>>>>>>> 645ffa220898e1ce807cb977662f9b970750f216
    else
        return 0;
}

<<<<<<< HEAD
/* Função para ler o menor valor da fila de prioridade */
int escreveFilaPrioridadeMenor(Prioridade *l) {
    if (l != NULL && l->inicio != NULL)
        return l->menor->info;
    else
        return 0;
}

/* Função para remover o maior valor da fila de prioridade */
void removeFilaPrioridadeMaior(Prioridade **l) {
    if (*l != NULL && (*l)->maior != NULL) {
        PNO *aux = (*l)->inicio;
        (*l)->inicio = (*l)->inicio->prox;
        if ((*l)->inicio != NULL) {
            (*l)->inicio->ant = NULL;
        } else {
            free(*l);
            *l = NULL;
        }
        free(aux);
    }
}

/* Função para remover o menor valor da fila de prioridade */
void removeFilaPrioridadeMenor (Prioridade **l) {
    PNO *aux, *aux2;
    if (*l != NULL && (*l)->menor != NULL) {
        //printf("1\n");
        if ((*l)->menor->prox == NULL) {
            aux = (*l)->menor;
            (*l)->menor = (*l)->menor->ant;
            free(aux);
            if ((*l)->menor == NULL) free(*l);
            else {
                    (*l)->menor->prox = NULL;
                    (*l)->menor->ant = NULL;
            }

        }

    }
}


void imprimeTudo (PNO *p) {
    if (p != NULL) {
        printf("-> %d ", p->info);
        imprimeTudo(p->prox);
    } else printf("\n");
=======
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
>>>>>>> 645ffa220898e1ce807cb977662f9b970750f216
}

int main()
{
<<<<<<< HEAD
    Pilha *p = NULL; Fila *f = NULL; Prioridade *fp = NULL;
    int n, h, q, i, pesoFila=0, pesoFilaPrio=0, pesoPilha=0, desconhecido=0, impossivel=0,s;
    int ehFila=1, ehPilha=1, ehFP=1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &h, &q);
        if (h == 1) {
            if (ehFila) {
                    printf("%d\n", i);
                    adicionaFila(&f, h);
            }
            if (ehPilha) adicionaPilha(&p, h);
            if (ehFP) adicionaFP(&fp, h);
        }
        else {
            if (q == escreveFila(f)) {
                    printf("FILA\n");
                    pesoFila++;
                    removeFila(&f);
            } else ehFila = 0;
            if (q == escrevePilha(p)) {
                    printf("PILHA\n");
                    pesoPilha++;
                    removePilha(&p);
            } else ehPilha = 0;
            if (q == escreveFilaPrioridadeMaior(fp) || q == escreveFilaPrioridadeMenor(fp)) {
                    printf("FILA prioridade\n");
                    pesoFilaPrio++;
                    if (q == escreveFilaPrioridadeMaior(fp)) removeFilaPrioridadeMaior(&fp);
                    else removeFilaPrioridadeMenor(&fp);
            } else ehFP = 0;
            s = pesoFila + pesoFilaPrio + pesoPilha;

        }
        imprimeTudo(f->inicio);
        printf("%d\n",escreveFila(f));
        imprimeTudo(p->inicio);
        printf("%d\n",escrevePilha(f));
        imprimeTudo(fp->inicio);
        printf("%d\n",escreveFila(fp));
    }
    printf("Pilha: %d / Fila: %d / FP: %d\n", ehPilha, ehFila, ehFP);
    printf("Fila..........: %d\n", pesoFila);
    printf("FilaPrioridade: %d\n", pesoFilaPrio);
    printf("Pilha.........: %d\n", pesoPilha);
    printf("Impossivel....: %d\n", impossivel);
=======
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


>>>>>>> 645ffa220898e1ce807cb977662f9b970750f216
    return 0;
}
