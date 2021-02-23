#include <iostream>

using namespace std;

int main()
{

    int a, b, aux;

    cin >> a;
    cin >> b;

    if(a < b)
    {
        aux = a;
        a = b;
        b = aux;
    }

    if(a%b == 0){
        cout << "Sao Multiplos" << endl;
    }
    else{
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}
