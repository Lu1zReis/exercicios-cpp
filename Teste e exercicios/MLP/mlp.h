#ifndef _mlp_h_
#define _mlp_h_
#include <stdlib.h>
#include <stdlib.h>

typedef struct _mult_perceptron_ {
    int sizeNode;
    double *x, *y, *hidden;
    double *netout;
    double **weight;
    double lrate;
} MultPerceptron;

void makePercepetron(MultPerceptron *net, int sizeNodeInput, int sizeNodeHidden, int sizeNodeOutput);
void computeOutput(MultPerceptron *net);
void backProp(MultPerceptron *net, double *target);
void showState(MultPerceptron net);

#endif