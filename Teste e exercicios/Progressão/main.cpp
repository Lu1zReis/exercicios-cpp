#include <iostream>

using namespace std;

int main()
{

    float a, formula1, formula2;


    for(a = 1; a <= 89; a++){
        formula1 = - 263 + 3 * a;
        cout << "Posicao " << a << ":" << formula1 << endl;
    }

    cout << "\n************************\n" << endl;

    for(a = 1; a <= 73; a++){
        formula2 = 290 - (4 * a);
        cout << "Posicao " << a << ":" << formula2 << endl;
    }

    return 0;
}
