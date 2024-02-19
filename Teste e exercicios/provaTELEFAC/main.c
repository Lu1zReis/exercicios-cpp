#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSET 50

struct _pno_ {
    struct _pno_ **next;
    int state;
    char *c;
};

struct _no_ {
    struct _pno_ **space;
};

typedef struct _pno_ Tno;
typedef struct _no_ State;

void makeAutomato(Tno **no, int state, char alpha, int destiny, int max, State *Space) {
    	int i = -1;
	// caso tenhamos um estado que ainda está nulo
	if (*no == NULL) {
        	*no = (Tno *) malloc(sizeof(Tno)); // alocando um estado 
		(*no)->state = state;
       		(*no)->next = (Tno **) malloc(max * sizeof(Tno)); // alocando n próximos estados
        	(*no)->c = (char *) malloc(max * sizeof(char));
        	while (++i < max) {
            		(*no)->c[i] = ' ';
            		(*no)->next[i] = NULL;
        	}
	}
	(*no)->c[destiny-1] = alpha;
	// fazendo o estado atual apontar para o endereço de um estado que tem transição
    (*no)->next[destiny-1] = Space->space[destiny-1]; 
    	
}

int checkAlphabet(char *s, State *Space, int count, int i, int *fS, int maxStates) {
	int aux = 0, j;
	// aux irá procurar a posição que está contida a letra na palavra s para a transição 
	while (aux < maxStates && Space->space[i]->c[aux] != s[count]) aux++; 
	// verifica se achou
	if (Space->space[i]->c[aux] == s[count]) {
		if (strlen(s)-1 == count) { // verifica se é o fim
			// looping para descobrir se aux agora pertence a um dos estados finais
			for (j = 0; j < sizeof(fS)/sizeof(int); j++) 
				if (aux == fS[j]-1) return 1;
			return 0;
		}
       		else return checkAlphabet(s, Space, count+1, aux, fS, maxStates);
	} else return 0;
}

int verifyChain(char *chain, char *alphabet) {
	int i, j, aux;
	for (i = 0; i < strlen(chain); i++) {
		aux = 0;
		for (j = 0; j < strlen(alphabet); j++) {
			if (chain[i] == alphabet[j]) aux = 1;
		}
		if (!aux) return 0;
	}
	return 1;
}

int main() {
    	int dest, state, maxState, *fState, iniState, i, j, n;
    	char alphabet, set[MAXSET], *s;

	// quantidade de estados
    	scanf("%d", &maxState);
	
	// estado inicial
	scanf("%d", &iniState);
	
	// Digite o número de estados finais
	scanf("%d", &j);
	fState = (int*) malloc(sizeof(int) * j);
	for (i = 0; i < j; i++) scanf("%d", &fState[i]); 
	
	// número de simbolos do alfabeto
	scanf("%d", &j);
	s = (char*) malloc (sizeof(char) * j);
	for (i = 0; i < j; i++) scanf(" %c", &s[i]);

	// quantidade de transicao
    	scanf("%d", &n);

    	State *automato = (State *)malloc(sizeof(State));
    	automato->space = (Tno **)malloc(maxState * sizeof(Tno));
    	for (i = 0; i < maxState; i++)
        	automato->space[i] = NULL;

    	i = -1;
    	while (++i < n) {
        	// estado->alfabeto->destino
        	scanf("%d %c %d", &state, &alphabet, &dest);
        	makeAutomato(&(automato)->space[state-1], state, alphabet, dest, maxState, automato); 
    	}

	if (automato->space[dest-1] == NULL) 
		makeAutomato(&(automato)->space[dest-1], dest, ' ', dest, maxState, automato); 
 	
	// cadeia de entrada
	scanf("%s", set); 	
	
	if (verifyChain(set, s)) {
	 	// mostrando os valores
		if(checkAlphabet(set, automato, 0, 0, fState, maxState)) printf("aceita!\n");
		else printf("rejeitado!\n");
	} else 	printf("rejeitado!\n");	

    	return 0;
}
