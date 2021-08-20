#include <iostream>

using namespace std;

void tabuada(int n)
{
    for(int i = 1; i < 11; i++) {
        cout << i << " x " << n << " = " << i*n << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    tabuada(n);
    return 0;
}
