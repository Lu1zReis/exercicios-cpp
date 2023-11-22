#include <stdio.h>
#include <stdlib.h>

struct _pilha_ {
	int info;
        struct _pilha_ *prox;
};

struct _fila_ {
	int info;
        struct _fila_ *prox, *ant;
};

struct _desc_fila_ {
	struct _fila_ *inicio;
	struct _fila_ *fim;
};

typedef struct _pilha_ Pilha;
typedef struct _fila_ Fila;
typedef struct _desc_fila_ DescFila;

void *inserePilha (Pilha **no, int info) {
	Pilha *novo;
	novo = (Pilha*) malloc (sizeof(Pilha));
	novo->info = info;
	novo->prox = *no;
	*no = novo;
}

void removePilha (Pilha **no) {
	Pilha *aux;
	aux = *no;
	*no = (*no)->prox;
	free(aux);
}

void escrevePilha(Pilha *no) {
	if (no != NULL) printf("%d\n", no->info);
}

void insereFila (DescFila **no, int info) {
	Fila *novo;
	novo = (Fila*) malloc (sizeof(Fila));
	if (*no == NULL)  {
		*no = (DescFila*) malloc(sizeof(DescFila));
		novo->info = info;
		novo->prox = NULL;
		novo->ant = NULL;
		(*no)->inicio = novo;
		(*no)->fim = novo;
	} else {
		novo->info = info;
		novo->prox = (*no)->inicio;
		novo->ant = NULL;
		(*no)->inicio->ant = novo;
		(*no)->inicio = novo;
	}
}

void removeFila (DescFila **no) {
	if (*no != NULL && (*no)->inicio != NULL) {
		Fila *aux;
		aux = (*no)->fim;
		(*no)->fim = (*no)->fim->ant;
		free(aux);
		if ((*no)->fim != NULL) (*no)->fim->prox = NULL;
		else {
			free(*no);
			*no = NULL;
		}
	}
}

void escreveFila (DescFila *no) {
	if (no != NULL && no->inicio != NULL)
		printf("%d\n", no->fim->info);
}

int main(int argc, char *argv[])
{
	Pilha *no = NULL; DescFila *f = NULL;
			
	insereFila(&f, 1);
	insereFila(&f, 2);
	escreveFila(f);
	removeFila(&f);
	escreveFila(f);
	removeFila(&f);
	escreveFila(f);
	insereFila(&f, 5);
	escreveFila(f);
	/*
	 * 	inserePilha(&no, 10);
	 * 	inserePilha(&no, 9);
	 *	escrevePilha(no);
	 *	removePilha(&no);
	 *	escrevePilha(no);
	 *	removePilha(&no);
	 *	escrevePilha(no);
	 *
	*/
	return 0;
}
