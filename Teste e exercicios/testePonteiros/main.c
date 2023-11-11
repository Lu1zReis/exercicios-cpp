#include <stdio.h>
#include <stdlib.h>

int main()
{

    int **a;
    int *b;
    int c = 5;

    b = &c; // b tem o endereço de c
    a = &b; // a tem o endereço de b
    printf("endereco de 'A' original %p\n", &a); // 0061FF1C
    printf("valor do endereco de 'A' %p\n", a); // 0061FF18
    printf("endereco de 'B' original %p\n", &b); // 0061FF18
    printf("valor do endereco de 'B' %p\n", b); // 0061FF14
    printf("endereco de 'C' %p\n", &c); // 0061FF14

    /*
        -------------PROPRIEDADES-------------
        a = endereco de b
        *a = endereco que b está apontando (c)
        **a = acessa o valor de c
    */

    printf("*a = b | %p = %p\n", *a, b); // 0061FF14 = 0061FF14
    printf("**a = 5 | %d\n", **a);

    int aux = 10;

    *a = &aux; // trocando o endereço que b aponta

    printf("agora *b muda de 5 para %d\n", *b); // *b = 10

    a

    return 0;
}
