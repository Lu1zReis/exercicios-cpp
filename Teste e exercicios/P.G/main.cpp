#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout.precision(2);
    double inicio, x = 0, aux;

    cout << "Digite o Inicio: ";
    cin >> inicio;
    cout << "Digite o valor que sera multiplicado: ";
    cin >> x;

    while(aux <= 5){
        inicio *= x;
        cout << fixed << inicio << endl;
        aux ++;
    }

    return 0;
}
