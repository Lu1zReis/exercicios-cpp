#include <iostream>
#include <math.h>

using namespace std;
float Lado_maior, Lado_meio, Lado_menor;

void ordenando(float a, float b, float c){

    if(a > b and a > c){
        Lado_maior = a;

        if(b > c){
            Lado_meio = b;
            Lado_menor = c;
        }
        else{
            Lado_meio = c;
            Lado_menor = b;
        }
    }

    if(b > a and b > c){
        Lado_maior = b;

        if(a > c){
            Lado_meio = a;
            Lado_menor = c;

        }
        else{
            Lado_meio = c;
            Lado_menor = a;

        }

    }

    if(c > b and c > a){
        Lado_maior = c;

        if(a > b){
            Lado_maior = a;
            Lado_menor = b;

        }
        else{
            Lado_maior = b;
            Lado_menor = a;

        }
    }

    else{
        Lado_maior = a;
        Lado_meio = b;
        Lado_menor = c;

    }



}

int main()
{
    float Lado1, Lado2, Lado3, somaMenores, aEle, bEle, cEle;

    cin >> Lado1;
    cin >> Lado2;
    cin >> Lado3;

    ordenando(Lado1, Lado2, Lado3);

    somaMenores = Lado_meio + Lado_menor;
    aEle = Lado_maior * Lado_maior;
    bEle = Lado_meio * Lado_meio;
    cEle = Lado_menor * Lado_menor;

    cout << "Soma entre o meio e menor = " << somaMenores << endl;
    cout << "maior elevado = " << aEle << endl;
    cout << "meio elevado = " << bEle << endl;
    cout << "Menor elevado = " << cEle << endl;

    return 0;
}
