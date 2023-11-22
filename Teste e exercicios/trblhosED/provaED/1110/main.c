#include <stdio.h>
#include <stdlib.h>

struct No
{
    int num;
    struct No *prox;
    struct No *ant;
};

typedef struct No no;

no *criaLista(int n)
{
    if (n == 0)
        return NULL;
    else
    {
        no *novo_no = (no *)malloc(sizeof(no));
        novo_no->num = n;
        novo_no->prox = criaLista(n - 1);
        if (novo_no != NULL && novo_no->prox != NULL)
        {
            novo_no->prox->ant = novo_no;
        }
        novo_no->ant = NULL;
        return novo_no;
    }
}

void percorre(no *q)
{
    while (q != NULL)
    {
        printf("\n     %d\n", q->num);
        q = q->prox;
    }
}

int pop(no **p)
{
    if ((*p) != NULL)
    {
        if ((*p)->prox == NULL)
        {
            int n = (*p)->num;
            free(*p);
            (*p) = NULL;
            return n;
        }
        else
        {
            no *aux = *p;
            while (aux->prox != NULL)
                aux = aux->prox;
            aux->ant->prox = NULL;
            int n = aux->num;
            free(aux);
            return n;
        }
    }
}

void inverte(no **p)
{
    if ((*p) != NULL && (*p)->prox != NULL)
    {
        no *aux = (*p);
        while (aux->prox != NULL)
            aux = aux->prox;
        
        if (aux->ant != NULL)
        {
            aux->ant->prox = NULL;
            aux->prox = (*p);
            (*p)->ant = aux; // Adiciona essa linha para corrigir o ponteiro 'ant' do novo primeiro elemento.
        }
        else
        {
            aux->prox = NULL;
        }
        (*p) = aux;
        (*p)->ant = NULL;
    }
}


int main(int argc, char *argv[])
{
    no *lista;
    int v = 1;
    while (v != 0) {
        
        scanf("%d", &v);
        if (v != 0) {;
        lista = criaLista(v);
        // percorre(lista);
        printf("Discarded cards: ");
        while(lista != NULL && lista->prox != NULL) {
            int n = pop(&lista);
            inverte(&lista);
            // percorre(lista);
            printf("%d", n);
            if (lista->prox != NULL) printf(", ");
        }
        printf("\nRemaining card: %d\n", lista->num);
        free(lista);
        }
    }
    return 0;
}