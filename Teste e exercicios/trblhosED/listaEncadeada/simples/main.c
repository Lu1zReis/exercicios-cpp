#include <stdio.h>
#include "lista.h"

int main () {

    Tlist *p;

    p = makeList();
    insertBegintList(&p, 10);
    insertBegintList(&p, 4);
    insertBegintList(&p, 7);
    showList(p);
    removeItem(&p, 9);
    showList(p);
    printf("%d\n",listSize(p));
    eraseList(&p);
    printf("%d\n",listSize(p));
    insertPos(&p, 3, 2);
    insertPos(&p, 5, 1);
    showList(p);

    return 0;
}
