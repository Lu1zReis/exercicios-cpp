#include <iostream>

using namespace std;

int main()
{
    cout << "Escreva de 1 a 10" << endl;
    int num;
    cin >> num;

    string mes = (num==1)?"Numero digitado 1":
                 (num==2)?"Numero digitado 2":
                 (num==3)?"Numero digitado 3":
                 (num==4)?"Numero digitado 4":
                 (num==5)?"Numero digitado 5":
                 (num==6)?"Numero digitado 6":
                 (num==7)?"Numero digitado 7":
                 (num==8)?"Numero digitado 8":
                 (num==9)?"Numero digitado 9":
                 (num==10)?"Numero digitado 10":
                     "O numero digitao não esta entre 1 a 10";

                     cout << mes << endl;
    return 0;
}
