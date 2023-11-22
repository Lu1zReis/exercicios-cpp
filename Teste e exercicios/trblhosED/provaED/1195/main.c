#include <stdio.h>
#include <stdlib.h>

typedef struct _arvore_ {
	int info;
	struct _arvore_ *dir, *esq;
} Arvore;

Arvore *insere (Arvore **no, int info) {
	if (*no == NULL) {
		*no = (Arvore*) malloc (sizeof(Arvore));
		(*no)->info = info;
		(*no)->esq  = NULL;
		(*no)->dir  = NULL;
		return *no;
	} else {
		if (info < (*no)->info) (*no)->esq = insere(&(*no)->esq, info);
		else (*no)->dir = insere(&(*no)->dir, info);
		return *no;	
	}
}

void infixo (Arvore *no) {
	if (no != NULL) {
		infixo(no->esq);
		printf(" %d", no->info);
		infixo(no->dir);
	}
}

void prefixo (Arvore *no) { 
	if (no != NULL) {
		printf(" %d", no->info);
		prefixo(no->esq);
		prefixo(no->dir);
	}
} 

void posfixo (Arvore *no) {
	if (no != NULL) {
		posfixo(no->esq);
		posfixo(no->dir);
		printf(" %d", no->info);	
	}
}

void libera (Arvore **no) {
	if (*no != NULL) {
		libera(&(*no)->esq);
		libera(&(*no)->dir);
		free(*no);
	}
}

int main () {
	Arvore *no; int i, j, c, n, info;
	no = NULL;
	scanf("%d", &c);
	for (i = 0; i < c; i++) {
		scanf("%d", &n);
		for (j = 0; j < n; j++) {
			scanf("%d", &info);
			insere(&no, info);
		}
		printf("Case %d:\n", i+1);
		printf("Pre.:");
		prefixo(no);
		printf("\n");
		printf("In..:");
		infixo(no);
		printf("\n");
		printf("Post:");
		posfixo(no);
		printf("\n");
		printf("\n");
		libera(&no);
	}
	
	return 0;
}
