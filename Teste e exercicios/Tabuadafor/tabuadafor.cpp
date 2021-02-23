#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;

    cout << "Informe uma tabuada..." << endl;
    cin >> n;

    for(int p=0; p<=10; p++){
        cout << p << " x " << n << " = " <<p*n<< endl;
    }

    system("pause");
    return 0;
}
