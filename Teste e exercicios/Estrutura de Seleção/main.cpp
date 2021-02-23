#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    int aux = 0, soma1, soma2, par;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    soma1 = c + d;
    soma2 = a + b;
    par = a % 2;

    if(b > c){
        aux += 1;
    }

    if(d > a){
        aux += 1;
    }

    if(soma1 > soma2){
        aux += 1;
    }

    if(c >= 0){
        if(d >= 0){
            aux += 1;
        }
    }

    if(par == 0){
        aux += 1;
    }


    if(aux == 5){
        cout << "Valores aceitos" << endl;
    }
    else{
        cout << "Valores nao aceitos" << endl;
    }

    return 0;
}
