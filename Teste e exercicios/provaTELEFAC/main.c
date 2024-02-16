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
        (*no)->next[destiny-1] = Space->space[destiny-1]; // fazendo o estado atual apontar para o endereço de um estado que tem transição
    	
}

int checkAlphabet(char *s, State *Space, int count, int i, int *fS, int maxStates) {
	int aux = 0, j;

	while (aux < maxStates && Space->space[i]->c[aux] != s[count]) aux++; // 
	
	if (Space->space[i]->c[aux] == s[count]) {
		if (strlen(s)-1 == count) {
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

	printf("Digite a quantidade de estados: ");
    	scanf("%d", &maxState);
	
	printf("Digite o estado inicial: ");
	scanf("%d", &iniState);
	
	printf("Digite o número de estados finais: ");
	scanf("%d", &j);
	fState = (int*) malloc(sizeof(int) * j);
	for (i = 0; i < j; i++) scanf("%d", &fState[i]); 
	
	printf("Digite o número de simbolos do alfabeto: ");
	scanf("%d", &j);
	s = (char*) malloc (sizeof(char) * j);
	for (i = 0; i < j; i++) scanf(" %c", &s[i]);

	printf("Digite a quantidade de transicao: ");
    	scanf("%d", &n);

    	State *automato = (State *)malloc(sizeof(State));
    	automato->space = (Tno **)malloc(maxState * sizeof(Tno));
    	for (i = 0; i < maxState; i++)
        	automato->space[i] = NULL;

    	i = -1;
    	while (++i < n) {
        	printf("Digite estado->alfabeto->destino: ");
        	scanf("%d %c %d", &state, &alphabet, &dest);
        	makeAutomato(&(automato)->space[state-1], state, alphabet, dest, maxState, automato); 
    	}

	if (automato->space[dest-1] == NULL) 
		makeAutomato(&(automato)->space[dest-1], dest, ' ', dest, maxState, automato); 
 	
	printf("Digite a cadeia de entrada: ");
	scanf("%s", set); 	
	
	if (verifyChain(set, s)) {
	
	 	// mostrando os valores
    		for (i = 0; i < maxState; i++) {
        		if (automato->space[i] != NULL) 
				printf("%d -> ", automato->space[i]->state);
			int j = -1;
        		while (++j < maxState) {
            		if (automato->space[i]->c[j] != ' ')
                		printf("%c -> ", automato->space[i]->c[j]);
            		if (automato->space[i]->next[j] != NULL)
                		printf("%d\n", automato->space[i]->next[j]->state);
			}
    		}
		printf("saida: %d\n", checkAlphabet(set, automato, 0, 0, fState, maxState));
	} else { 
		printf("saida: 0");	
	}

    	return 0;
}
