#include <iostream>

using namespace std;

int main()
{
    //A estrutura whie � melhor para identificar erros, como por exemplo, enquanto o usuario errar vai continuar com a instru��o
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
