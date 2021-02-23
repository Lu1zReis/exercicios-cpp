#include <iostream>

using namespace std;

int main()
{
    cout.precision(2);

    int lanche;
    float quantidade;

    cin >> lanche;
    cin >> quantidade;

        switch(lanche){
    case 1:
        quantidade = quantidade * 4;
        cout << fixed << "Total: R$ " << quantidade << endl;
        break;
    case 2:
        quantidade = quantidade * 4.50;
        cout << fixed << "Total: R$ " << quantidade << endl;
        break;
    case 3:
        quantidade = quantidade * 5;
        cout << fixed << "Total: R$ " << quantidade << endl;
        break;
    case 4:
        quantidade = quantidade * 2;
        cout << fixed << "Total: R$ " << quantidade << endl;
        break;
    case 5:
        quantidade = quantidade * 1.50;
        cout << fixed << "Total: R$ " << quantidade << endl;
        break;
        }

    return 0;
}
