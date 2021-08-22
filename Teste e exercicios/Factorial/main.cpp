#include <iostream>

using namespace std;

void fatorial(int valor) {
    int a, b = 0;
    for(int i = valor; i > 0; i--) {
        cout << i << endl;
    }
}

int main()
{
    int valor = 0;
    cin >> valor;

    fatorial(valor);
    return 0;
}
