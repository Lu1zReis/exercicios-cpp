#include <stdio.h>
#include "lista.h"

int main () {

    Tlist *p; int choose, item, pos;
    p = makeList();

    while (choose != 10) {
        printf("\n=-=-=-=-=-=-= MENU =-=-=-=-=-=-=\n");
        printf("1 - Adicionar Item no inicio\n");
        printf("2 - Adicionar Item por posicao\n");
        printf("3 - Pesquisar Item\n");
        printf("4 - Remove Item\n");
        printf("5 - Remove Item do Inicio\n");
        printf("6 - Verifica tamanho\n");
        printf("7 - Mostra Lista\n");
        printf("8 - Ordena Lista\n");
        printf("9 - Apaga Lista\n");
        printf("10 - Sair\n");
        scanf("%d", &choose);

        switch (choose) {
            case 1:
                printf("Novo valor: ");
                scanf("%d", &item);
                insertBegintList(&p, item);
            break;
            case 2:
                printf("Novo valor: ");
                scanf("%d", &item);
                printf("Posicao: ");
                scanf("%d", &pos);
                insertPos(&p, item, pos);
            break;
            case 3:
                printf("Valor a ser pesquisado: ");
                scanf("%d", &item);
                pos = searchItem(p, item);
                if (pos > 0) printf("Valor existente na lista, na posicao %d\n", pos);
                else printf("Valor nao existe na lista");
            break;
            case 4:
                printf("Valor a ser removido: ");
                scanf("%d", &item);
                if (removeItem(&p, item)==1)  printf("Valor removido com sucesso\n");
                else printf("Nao foi possivel remover o valor\n");
            break;
            case 5:
                if (removeItemBegin(&p)) printf("Valor do inicio removido com sucesso\n");
                else printf("Nao foi possivel remover o primeiro valor\n");
            break;
            case 6:
                printf("A quantidade de item na lista eh %d", listSize(p));
            break;
            case 7:
                printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                showList(p);
                printf(" =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            break;
            case 8:
                if (ordena(&p)) printf("Lista ordenada com sucesso\n");
                else printf("Nao foi possivel ordenar a lista\n");
            break;
            case 9:
                if (eraseList(&p)) printf("Lista deletada com sucesso\n");
                else printf("Nao foi possivel deletar a lista\n");
            break;
            case 10:
                printf("\nSaindo...\n");
            break;
            default:
                printf("\nDigite um valor válido\n");
        }

    }

    freeList(&p);

    return 0;
}
