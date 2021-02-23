#include <iostream>

using namespace std;

int main()
{
    int lista[10], a, i;

    for(a = 0; a < 10; a++)
    {
        cout << "num " << a << " = ";
        cin >> lista[a];
    }

    for(i = 0; i < 10; i++)
    {
        cout << "Os valores adicionados foram na posicao ";
        cout << i << " = " << lista[i] << endl;
    }

    return 0;
}
