#include <stdio.h>
#include <stdlib.h>

int partition(int *vet, int p, int r) {
    int j, i = p - 1, x = vet[r], aux;
    for (j = p; j < r; j++) {
        if (vet[j] < x) {
            i++;
            aux = vet[j];
            vet[j] = vet[i];
            vet[i] = aux;
        }
    }
    i++;
    aux = vet[r];
    vet[r] = vet[i];
    vet[i] = aux;
    return i;
}

void quicksort (int *vet, int p, int r) {
    if (p < r) {
        int q = partition(vet, p, r);
        quicksort(vet, p, q-1);
        quicksort(vet, q+1, r);
    }
}

int binarySearch(int *vet, int p, int q, int x) {
    int med = (p + q) / 2;
    if (p <= q) {
        if (vet[med] == x) return med;
        else if (x < vet[med]) return binarySearch(vet, p, med-1, x);
        else return binarySearch(vet, med+1, q, x);
    } else return -1;
}

int troca(int *v1, int *v2, int *v, int k, int tam, int tam2, int t) {

    if (k >= tam2) return -1;
    else {
        int n = binarySearch(v1, 0, tam-1, v2[k]);
        int m;
        if (t > 0) m = binarySearch(v, 0, t-1, v2[k]);
        else m = -1;
        if (n == -1 && m == -1) return k;
        else return troca(v1, v2, v, k+1, tam, tam2, t);
    }
}

void pushVet(int **vet, int tamAtual, int x) {
    int i, *aux = (int*) malloc(sizeof(int)*(tamAtual+1));
    for (i = 0; i < tamAtual; i++) aux[i] = (*vet)[i];
    aux[tamAtual] = x;
    free(*vet);
    *vet = (int*) malloc(sizeof(int) * (tamAtual+1));
    for (i = 0; i <= tamAtual; i++) (*vet)[i] = aux[i];
    
}

int main (int argc, char *argv[])
{
	int t, j, res, trocas, tam1=1, tam2=1, i, aux;
	while(scanf("%d %d", &tam1, &tam2) && tam1 != 0 && tam2 != 0) {
        int *vet  = (int*) malloc(sizeof(int)*tam1);
        int *vet2 = (int*) malloc(sizeof(int)*tam2);
        int *v    = (int*) malloc(sizeof(int)*0);
        t = 0; j = 0; res = 0; trocas = 0;
        for (i = 0; i < tam1; i++) {
            scanf("%d", &aux);
            vet[i] = aux;
        }

        for (i = 0; i < tam2; i++) {
            scanf("%d", &aux);
            vet2[i] = aux;
        }
        do {
            if (binarySearch(vet2, 0, tam2-1, vet[j]) == -1) {
                if (res >= 0 && res < tam2) res = troca(vet, vet2, v, res, tam1, tam2, t);
                if (res != -1) {
                    pushVet(&v, t, vet2[res]);
                    vet2[res] = vet[j];
                    quicksort(vet2, 0, tam2-1);
                    t++;
                    trocas++;
                    res++;
                }
            }
            j++;
        } while (j < tam1);
        printf("%d\n", trocas);
        if (vet != NULL) free(vet);
        if (vet2 != NULL) free(vet2);
        if (v != NULL) free(v);
    }
	return 0;
}