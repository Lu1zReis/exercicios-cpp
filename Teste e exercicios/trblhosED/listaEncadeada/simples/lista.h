#ifndef _LISTA_H_
#define _LISTA_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct _list_ {
    int value;
    struct _list_ *next;
} Tlist;

Tlist *makeList ();
Tlist *newItem (int n);
int insertBegintList (Tlist **l, int item);
int insertPos (Tlist **l, int v, int p);
int eraseList(Tlist **l);
int searchItem (Tlist *l, int item);
int removeItem (Tlist **l, int item);
int removeItemBegin (Tlist **l);
int isEmpty (Tlist *l);
int listSize (Tlist *l);
void showList (Tlist *l);
void ordena (Tlist **l);

#endif // _LISTA_H_
