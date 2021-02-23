#include <iostream>

using namespace std;

int main()
{
    int a=0;
    do{
    cout << a << endl;
    int b;
    cin >> b;
    a=a+b;
    }while(a<100);
    return 0;
}
