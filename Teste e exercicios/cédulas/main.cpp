#include <iostream>

using namespace std;

int main()
{

    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    int usu;

    cin >> usu;

    nota100 = usu / 100;
    nota50 = (usu - (nota100 * 100)) / 50;
    nota20 = (usu - ((nota100 * 100) + (nota50 * 50))) / 20;
    nota10 = (usu - ((nota100 * 100) + (nota50 * 50) + (nota20 * 20))) / 10;
    nota5 = (usu - ((nota100 * 100) + (nota50 * 50) + (nota20 * 20) + (nota10 * 10))) / 5;
    nota2 = (usu - ((nota100 * 100) + (nota50 * 50) + (nota20 * 20) + (nota10 * 10) + (nota5 * 5))) / 2;
    nota1 = (usu - ((nota100 * 100) + (nota50 * 50) + (nota20 * 20) + (nota10 * 10) + (nota5 * 5) + (nota2 * 2))) / 1;


    cout << nota100 << " nota (s) de R$ 100,00" << endl;
    cout << nota50 << " nota (s) de R$ 50,00" << endl;
    cout << nota20 << " nota (s) de R$ 20,00" << endl;
    cout << nota10 << " nota (s) de R$ 10,00" << endl;
    cout << nota5 << " nota (s) de R$ 5,00" << endl;
    cout << nota2 << " nota (s) de R$ 2,00" << endl;
    cout << nota1 << " nota (s) de R$ 1,00" << endl;

    return 0;
}
