#include <stdio.h>
#include <stdlib.h>

struct _pilha_ {
    char info;
    struct _pilha_ *prox;
};

typedef struct _pilha_ Pilha;

void *inserePilha(Pilha **no, char info) {
    Pilha *novo;
    novo = (Pilha *)malloc(sizeof(Pilha));
    novo->info = info;
    novo->prox = *no;
    *no = novo;
}

void removePilha(Pilha **no) {
    if (*no != NULL) {
        Pilha *aux;
        aux = *no;
        *no = (*no)->prox;
        free(aux);
    }
}

void desalocaPilha(Pilha **no) {
    while (*no != NULL) {
        removePilha(&(*no));
    }
}

void imprime (Pilha *no) {

	if (no != NULL) printf("%c\n", no->info);
	else imprime(no->prox);

}

int main() {
    Pilha *no = NULL;
    char s[1001]; // Aumentei o tamanho da matriz
    int n, i, j, c;

    scanf("%d", &n);
    getchar(); // pegar o caractere de nova linha deixado no buffer

    for (i = 0; i < n; i++) {
        fgets(s, sizeof(s), stdin);
        j = 0;
        c = 0;

        while (s[j] != '\0') {
            if (s[j] == '<')
                inserePilha(&no, '<');
            else if (s[j] == '>' && no != NULL) {
                removePilha(&no);
                c++;
            }
            j++;
        }

        desalocaPilha(&no);
        //imprime(no);
		printf("%d\n", c);
    }

    return 0;
}
