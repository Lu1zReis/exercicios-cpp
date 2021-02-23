#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    cout.precision(2);

    char vedendor[] = {};
    double vendido, comissao, porcentagem, dinheiro;

    cin >> vedendor;
    cin >> vendido;
    cin >> comissao;

    porcentagem = comissao * 0.15;
    dinheiro = porcentagem + vendido;

    cout << "TOTAL = R$ " << fixed << dinheiro << endl;

    return 0;
}
