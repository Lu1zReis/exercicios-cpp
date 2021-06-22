#include <iostream>
using namespace std;

int main()
{
    int valor, valor1 = 0;
    cout << "Digite a quantidade do fatorial: ";
    cin >> valor; 

    for(int c = valor; c > 0; c--) {

        if(c == valor) {

            cout << c << " x ";
            valor1 = valor;
            
        }else {

            valor1 = c; 
            valor *= valor1;

            if(c > 2) 
                cout << c << " x ";
            if(c < 2)
                cout << c;

        }

    }

    cout << " -> " << valor << endl;

    return 0;
}