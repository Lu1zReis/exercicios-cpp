#include <iostream>

using namespace std;

struct valor {
    int valorInicial;
    int valorFinal;
    int valorProgresso;
};

void fatorial(valor v) {
    cout << v.valorInicial << "x" << v.valorFinal << " -> " << v.valorInicial * v.valorFinal << " ";
    for(int i = v.valorInicial - 2; i > 0; i--){
        v.valorFinal = v.valorProgresso;
        cout << i << "x" << v.valorFinal << " -> " << i * v.valorFinal << " ";
        v.valorProgresso = i * v.valorFinal;
    }
}

int main()
{
    valor v;
    cin >> v.valorInicial;
    v.valorFinal = v.valorInicial - 1;
    v.valorProgresso = v.valorInicial * v.valorFinal;
    fatorial(v);

    return 0;
}
