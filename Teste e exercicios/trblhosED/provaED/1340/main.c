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

    (*l)->inicio = novo;
}

/* Função para ler o topo da pilha */
int escrevePilha(Pilha *l) {
    if (l != NULL && l->inicio != NULL)
        return l->inicio->info;
    else
        return 0;
}

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
    else
        return 0;
}

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
    else
        return 0;
}

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
}

int main()
{
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
    return 0;
}
