#include <stdio.h>

typedef struct Perceptron
{
    int classe0[3][3];
    int classe1[3][3];
    int feature[3];
    double weight[3], limiar, n;
} Tperceptron;


void inicializando (Tperceptron *c) {
    // {1,1,1}, {1,1,0}, {1,0,0}
    c->classe0[0][0]= 1;
    c->classe0[0][1]= 1;
    c->classe0[0][2]= 1;

    c->classe0[1][0]= 1;
    c->classe0[1][1]= 1;
    c->classe0[1][2]= 0;
    
    c->classe0[2][0]= 1;
    c->classe0[2][1]= 0;
    c->classe0[2][2]= 0;
    
    // {{0,1,1}, {0,1,0}, {0,0,1}};
    c->classe1[0][0]= 0;
    c->classe1[0][1]= 1;
    c->classe1[0][2]= 1;

    c->classe1[1][0]= 0;
    c->classe1[1][1]= 1;
    c->classe1[1][2]= 0;
    
    c->classe1[2][0]= 0;
    c->classe1[2][1]= 0;
    c->classe1[2][2]= 1;
    
    // outros
    c->weight[0] = 0.5; c->weight[1] = 0.5; c->weight[2] = 0.5;
    c->n = 0.4; c->limiar = 0.6; 
}

double ativacao (int c[3], double w[3], double l) {
    return (c[0] * w[0]) + (c[1] * w[1]) + (c[2] * w[2]) - l;
}

void atualizacaoWeight (double w[3], double n, int c[3], int d, double u, double *l) {
    int i;
    for (i = 0; i < 3; i++) w[i] = w[i] + n * c[i] * (d - u);
    *l = *l + n * (-0.1) * (d - u); 
}

int main () {
    Tperceptron ann; int i, j, erro, d, cont; double u;

    inicializando(&ann);

    // treinando a rede
    i = 0;
    while (i < 3) {
        printf("1a classe (%d %d %d)\n", ann.classe0[i][0], ann.classe0[i][1], ann.classe0[i][2]);
        printf("d: ");
        scanf("%d", &d);
        
        u = ativacao(ann.classe0[i], ann.weight, ann.limiar);
        printf("u = %lf\n", u);
        if (u >= 0) u = 1;
        else u = 0;
        if (u != d) atualizacaoWeight(ann.weight, ann.n, ann.classe0[i], d, u, &ann.limiar);

        printf("pesos\n");
        printf("p1 %lf  p2 %lf  p3 %lf\n", ann.weight[0],ann.weight[1],ann.weight[2]);

        printf("limiar\n");
        printf("%lf\n", ann.limiar);

        printf("2a classe (%d %d %d)\n", ann.classe1[i][0], ann.classe1[i][1], ann.classe1[i][2]);
        printf("d: ");
        scanf("%d", &d);
        
        u = ativacao(ann.classe1[i], ann.weight, ann.limiar);
        printf("u = %lf\n", u);
        if (u >= 0) u = 1;
        else u = 0;
        if (u != d) atualizacaoWeight(ann.weight, ann.n, ann.classe1[i], d, u, &ann.limiar);

        printf("pesos\n");
        printf("p1 %lf  p2 %lf  p3 %lf\n", ann.weight[0],ann.weight[1],ann.weight[2]);

        printf("limiar\n");
        printf("%lf\n", ann.limiar);

        i++;
    } 

    printf("\n==========rede treinada========\n");

    printf("Verificar resultados\n");
    int aux;
    while (cont) {
        fflush(stdin);
        scanf("%d %d %d", &ann.feature[0], &ann.feature[1], &ann.feature[2]);
        u = ativacao(ann.feature, ann.weight, ann.limiar);
        if (u >= 0) aux = 1;
        else aux = 0;
        printf("resultado: %d\n", aux);
        printf("continuar?[1 = SIM/ 0 = NAO] ");
        scanf("%d", &cont);
    }
    return 0;
}