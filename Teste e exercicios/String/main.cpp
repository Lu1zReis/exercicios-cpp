#include <iostream>

using namespace std;

int main()
{
    char leia[9];
    cout << leia << endl;
    cin >> leia;
    cout << "o nome armazenado foi: " << leia << endl;
    if (leia=="luiz"){
        cout << "okay\n";
    }if(leia=="rafa"){
    cout << "nao\n";
    }
    cout << "pronto" << endl;

    return 0;
}
