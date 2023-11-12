#include "lista.h"

Tlist *makeList () {
    return NULL;
}

Tlist *newItem (int n) {
    Tlist *newValue;
    newValue = (Tlist*) malloc(sizeof(Tlist));
    if (newValue == NULL) return NULL;
    else {
        newValue->value = n;
        newValue->next = NULL;
        return newValue;
    }
}

int insertBegintList (Tlist **l, int item) {
    Tlist *newNo;
    newNo = newItem(item);
    newNo->next = *l;
    *l = newNo;
}

int insertPos (Tlist **l, int v, int p) {
    Tlist *aux = *l, *aux2, *n; int i = 0;
    // verificando se eh p/ inserir na primeira pos
    if (p == 1 || isEmpty(aux)) return insertBegintList(l, v);

    // indo ate a pos ou ate o fim
    do {
        aux2 = aux;
        aux = aux->next;
        i++;
    } while (!isEmpty(aux) && i < p);

    n = newItem(v);
    n->next = aux2->next;
    aux2->next = n;


    return 1;
}

int eraseList(Tlist **l) {
    if (isEmpty(*l)) return 0;
    Tlist *aux, *aux2;
    aux = *l;
    while (aux != NULL) {
        aux2 = aux;
        aux = aux->next;
        free(aux2);
    }
    *l = makeList();
    return 1;
}

int searchItem (Tlist *l, int item) {
    Tlist *aux = l; int i = 1;
    if (isEmpty(l)) return -1;
    while (aux != NULL && aux->value != item) {
        aux = aux->next;
        i++;
    }
    if (aux == NULL) return -1;
    else return i;

    return 0;
}

int removeItemBegin (Tlist **l) {
    if (isEmpty(*l)) return 0;
    else if ((*l)->next == NULL) {
        free(*l);
        *l = makeList();
        return 1;
    }
    else {
        Tlist *aux = *l, *rm = *l;
        aux = aux->next;
        free(rm);
        *l = aux;
        return 1;
    }
}

int removeItem (Tlist **l, int item) {
    int pos = searchItem(*l, item);
    Tlist *aux = *l, *rm = *l;
    if (pos < 1) return -1;
    else if (pos == 1)
            return removeItemBegin(l);
    else {
        while (rm->value != item) {
            aux = rm;
            rm = rm->next;
        }
        aux->next = rm->next;
        free(rm);
        return 1;
    }
}

int isEmpty (Tlist *l) {
    return l == NULL;
}

int listSize (Tlist *l) {
    if (l == NULL) return 0;
    int n = 0;
    while (!isEmpty(l)) {
        l = l->next;
        n++;
    }
    return n;
}
void showList (Tlist *l) {
    while (!isEmpty(l)) {
        printf(" -> %d", l->value);
        l = l->next;
    }
    printf("\n");
}

int ordena (Tlist **l) {
    Tlist *aux, *aux2, *lOrdem, *ant, *novo;
    if (*l == NULL || (*l)->next == NULL) return 0;
    else {
        lOrdem = NULL;
        aux = *l;
        while (!isEmpty(aux)) {
            if (lOrdem == NULL) {
                lOrdem = aux;
                aux = aux->next;
                lOrdem->next = NULL;
            } else {
                aux2 = lOrdem; ant = lOrdem;
                if (aux2->value >= aux->value) {
                    novo = aux;
                    aux = aux->next;
                    novo->next = lOrdem;
                    lOrdem = novo;
                } else {
                    while (aux2 != NULL && aux2->value <= aux->value) {
                        ant  = aux2;
                        aux2 = aux2->next;
                    }
                    if (aux2 == NULL) {
                        ant->next = aux;
                        aux = aux->next;
                        ant->next->next = NULL;
                    } else {
                        novo = aux;
                        aux  = aux->next;
                        novo->next = aux2;
                        ant->next = aux;
                    }
                }
            }
            // if (lOrdem->next != NULL || aux2 == NULL) aux = aux->next;
        }
        *l = lOrdem;
        return 1;
    }
}

void freeList(Tlist **p) {
    Tlist *rm;
    if (p != NULL) {
        while (*p != NULL) {
            rm = *p;
            *p = (*p)->next;
            free(rm);
        }
    }
}
