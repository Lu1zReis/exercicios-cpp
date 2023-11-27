#include <stdio.h>
#include <stdlib.h>

struct _Tno_ {
    int info;
    struct _Tno_ *prox;
};

struct _lista_ {
    struct _Tno_ *lista;
    struct _lista_ *prox;
};

typedef struct _Tno_ Pno;
typedef struct _lista_ Lista;

void criaTamLista(Lista **l, int tam) {
    Lista *inicio = NULL;
    Lista *atual = NULL;

    for (int i = 0; i < tam; i++) {
        Lista *novo = (Lista *)malloc(sizeof(Lista));
        novo->lista = NULL;
        novo->prox = NULL;

        if (i == 0) {
<<<<<<< HEAD
            *l = novo; // Guarda o in�cio da lista
=======
            *l = novo; // Guarda o início da lista
>>>>>>> 645ffa220898e1ce807cb977662f9b970750f216
            inicio = novo;
        } else {
            atual->prox = novo;
        }

        atual = novo;
    }

    *l = inicio;
}


void insereLista(Lista **vet, int v, int m, int c) {
    Lista *aux = *vet;
    int calc, i = 0;
    calc = v % m;
    if (aux != NULL) {
        while (i < calc) {
            aux = aux->prox;
            i++;
        }

        Pno *no = (Pno *)malloc(sizeof(Pno));
        if (no != NULL) {
            no->info = v;
            no->prox = NULL;

            if (aux->lista == NULL) {
                aux->lista = no;
            } else {
                Pno *listaAux = aux->lista;
                while (listaAux->prox != NULL)
                    listaAux = listaAux->prox;
                listaAux->prox = no;
            }
        }
    }
}

<<<<<<< HEAD
void percorre (Lista *vet, int i) {
    printf("%d -> ", i);
    if (vet != NULL) {
        while (vet->lista != NULL) {
            printf("%d -> ", vet->lista->info);
            vet->lista = vet->lista->prox;
        }
        printf("\\");
        printf("\n");
        percorre(vet->prox, i+1);
    } else {
        printf("\\");
        printf("\n");
    }
=======
void percorre (Lista *lista) {
    Lista *vet = lista; Pno *l;
    int i=0;
    printf("%d -> ", i);
    while (vet != NULL) {
        l = vet->lista;
        while (l != NULL) {
            printf("%d -> ", l->info);
            l = l->prox;
        }
        printf("\\");
        printf("\n");
        vet = vet->prox;
        i++;
        printf("%d -> ", i);
    }
    printf("\\");
    printf("\n");
>>>>>>> 645ffa220898e1ce807cb977662f9b970750f216
}

void removeLista (Lista **vet) {
    Pno *l, *aux; Lista *v = *vet;
    while (v != NULL) {
        l = v->lista;
        while (l != NULL) {
            aux = l;
            l = l->prox;
            free(aux);
        }
        v->lista = NULL;
        v = v->prox;
    }
}

int main()
{
    int n, m, c, *v, i, j;
    Lista *vet = NULL;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &m, &c);
        if (m > 1)
            criaTamLista(&vet, m-1);
        else
            criaTamLista(&vet, m);
        v = (int*) malloc (sizeof(int)*c);
        for (j = 0; j < c; j++) {
            scanf("%d", &v[j]);
            insereLista(&vet, v[j], m, c);
        }
<<<<<<< HEAD
        percorre(vet,0);
=======
        percorre(vet);
>>>>>>> 645ffa220898e1ce807cb977662f9b970750f216
        removeLista(&vet);
    }

    return 0;

}
