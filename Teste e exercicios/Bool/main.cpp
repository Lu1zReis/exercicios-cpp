#include <iostream>

using namespace std;

int main()
{
   char a,b;
    bool maior;
    cout << "Insira um numero:    ";
    cin >> a;//1° a ser inserido
    cout << "Insira outro numero: ";
    cin >> b;//2° a ser inserido
    cout<<endl<<endl<<endl;//saltando 3 linhas
    if (a == 'oi')
    {
        maior = false;
    }
    else
   {
        maior = true;
   }

    if (maior == true )
        cout<<"O primeiro numero Eh maior que o segundo";
    else
        cout<<"O primeiro numero NAO eh maior que o segundo";


    return 0;
}
