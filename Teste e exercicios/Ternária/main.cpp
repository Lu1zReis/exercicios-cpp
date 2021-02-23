#include <iostream>

using namespace std;

int main()
{
    cout << "Digite um numero maior que 10 ou igual" << endl;
    int a=0;
    cin >> a;

    string texto = (a>=10) ? "Igual a 10 ou maior" : "Menor que 10";

    cout << "O valor digitado eh: " << texto << endl;
    return 0;
}
