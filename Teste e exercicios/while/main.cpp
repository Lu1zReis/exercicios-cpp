#include <iostream>

using namespace std;

int main()
{
    //A estrutura whie é melhor para identificar erros, como por exemplo, enquanto o usuario errar vai continuar com a instrução
    char a;

    cout << "Escreva a letra\n";
    cin>> a;
    while(a!='a'){
    cout<<"Errou"<<endl;
    cin>>a;
    }
    cout << "fim\n";

    return 0;
}
