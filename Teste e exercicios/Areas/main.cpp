#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
//declarar os ponto flutuante dos numeros
    cout.precision(3);

//variaveis
    double A, B, C, PI;
    double TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

//entrada de dados
    cin >> A;
    cin >> B;
    cin >> C;

//formulas / calculos
    PI = 3.14159;
    TRIANGULO = (A * C) / 2;
    CIRCULO = PI * pow(C, 2);
    TRAPEZIO = ((A+B) * C) / 2;
    QUADRADO = B * B;
    RETANGULO = B * A;

//saida de dados
    cout << fixed << "TRIANGULO: " << TRIANGULO << endl;
    cout << fixed << "CIRCULO: " << CIRCULO << endl;
    cout << fixed << "TRAPEZIO: " << TRAPEZIO << endl;
    cout << fixed << "QUADRADO: " << QUADRADO << endl;
    cout << fixed << "RETANGULO: " << RETANGULO << endl;

    return 0;
}
