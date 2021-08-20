#include <iostream>

using namespace std;
void geradorResu(float *valor = 0)
{
    float aux = 0, aux2 = 0;
    for(int c = 0; c < 3; c++)
    {
        cin >> aux2;

        if(c == 0)
        {
            aux2 *= 2;
        }
        else if(c == 1)
        {
            aux2 *= 3;
        }
        else
        {
            aux2 *= 5;
        }

        aux += aux2;
    }
    *valor = aux / 10;
}

int main()
{
    cout.precision(2);
    int nValores = 0;
    float valor, vetor[nValores];
    cin >> nValores;

    for(int i = 0; i < nValores; i++) {
        geradorResu(&valor);
        vetor[i] = valor;
    }
    for(int k = 0; k < nValores; k++) {
        cout << vetor[k] << endl;
    }

    return 0;
}
