#include <stdio.h>
int main () {

        int bolas[9], cont,j;
        char renas[9][10] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen","Rudolph"};

        for (int i = 0; i < 9; i++) {
                scanf("%d", &bolas[i]);
        }

        j = 1;
        cont=0;
 
        for (int i = 0; i < 9; i++) {
		while(j <= bolas[i]) {
                        if (cont > 8) {
                                cont = 0;
                        }
			cont++;
			j++;
                        
                }
                j = 1;
               
        }
        printf("%s\n", renas[cont-1]);
        return 0;
}
