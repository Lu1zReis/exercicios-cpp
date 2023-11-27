#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[201], aux[201];
    int n, i, maior, j, t;

    while (scanf("%d", &n) != EOF) {
        getchar();
        i = 0;
        maior = 0;
        j = 0;
        while (i < n) {
            fgets(s, sizeof(s), stdin);
            if (i == 0) {
                strcpy(aux, s);
            } else {
                while (s[j] == aux[j] && s[j] != '\0' && aux[j] != '\0') {
                    j++;
                }
                if (j > maior) maior = j;
            }
            i++;
        }

        printf("%d\n", maior);
    }

    return 0;
}
