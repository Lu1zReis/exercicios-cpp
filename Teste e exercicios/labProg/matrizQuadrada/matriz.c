#include <stdio.h>

int main () {
        int tam, k = 0, aux = 0;
        scanf("%d",&tam);
        k = tam/3;
        for (int i = 0; i < tam; i++) {
                for (int j = 0; j < tam; j++) {
                        // verificando quando comeca a linha com 1
                        if (i != k && aux == 0) {
                                if (i == j)
                                        printf("2");
                                else {
                                        if (j+1 == tam-i) 
                                                printf("3");
                                        else
                                                printf("0");
                                }
                        } else {
                                aux = 1;
                                 if(j >= k && j < tam-k)  {
                                     if (i == tam/2 && j == tam/2)
                                         printf("4");
                                     else
                                      	printf("1");		 
                                 } else {
                                    if (j+1 == tam-i)
                                        printf("3");
                                    else
                                         printf("0");
                                 }
                                 if (i >= tam-k)
                                     aux = 0;
                        }
                }
                printf("\n");
        }
        return 0;
}
