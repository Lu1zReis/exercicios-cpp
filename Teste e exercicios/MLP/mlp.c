#include "mlp.h"

void initialize (MultPerceptron *net, int calcWeightInHi, int calcWeightHiOu, int sizeNodeHidden) {
    int i, j;
    for (i = 0; i < sizeNodeHidden; i++) 
        for (j = 0; j < sizeNodeHidden-1; j++) 
            net->weight[i][j] = 0.2;
    
}

void makePercepetron(MultPerceptron *net, int sizeNodeInput, int sizeNodeHidden, int sizeNodeOutput) {
    int calcWeightInHi, calcWeightHiOu, i, j;
    net->hidden    = malloc(sizeof(double*) * sizeNodeHidden);
    net->x         = malloc(sizeof(double*) * sizeNodeInput);
    net->y         = malloc(sizeof(double*) * sizeNodeOutput);
    calcWeightInHi = (sizeNodeHidden * sizeNodeInput) / 2;
    calcWeightHiOu = sizeNodeHidden * sizeNodeOutput;
    net->weight    = malloc(sizeof(double*) * (sizeNodeHidden+1));
    net->weight[0] = malloc(sizeof(double*) * calcWeightInHi);
    net->weight[1] = malloc(sizeof(double*) * calcWeightInHi);
    net->weight[2] = malloc(sizeof(double*) * calcWeightHiOu);
    net->lrate     = 1;
    net->sizeNode  = sizeNodeHidden;
    for (i = 0; i < sizeNodeHidden+1; i++) 
        net->weight[i] = malloc(sizeof(double*) * sizeNodeHidden);

    initialize(net, calcWeightInHi, calcWeightHiOu, sizeNodeHidden+1);
}


void computeOutput(MultPerceptron *net) {
    
}

void backProp(MultPerceptron *net, double *target) {

}

void showState(MultPerceptron net) {

}