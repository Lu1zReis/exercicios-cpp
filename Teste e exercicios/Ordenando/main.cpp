#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    int a, b, c, menor, segundoMaior, Maior;

    cin >> a;
    cin >> b;
    cin >> c;

    if(a < b and a < c){
        menor = a;
        if(b < c){
            segundoMaior = b;
            Maior = c;
        }else{
        segundoMaior = c;
        Maior = b;
        }
    }
    if(b < a and b < c){
        menor = b;
        if(a < c){
            segundoMaior = a;
            Maior = c;
        }else{
        segundoMaior = c;
        Maior = a;
        }
    }
    if(c < a and c < b){
        menor = c;
        if(a < b){
            segundoMaior = a;
            Maior = b;
        }else{
        segundoMaior = b;
        Maior = a;
        }
    }

    cout << menor << endl;
    cout << segundoMaior << endl;
    cout << Maior << endl << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;



    return 0;
}
