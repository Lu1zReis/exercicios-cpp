#include <iostream>

using namespace std;

int imprime(int start=10, int finish=20){
    if(start<=finish){
        cout << start << endl;
        imprime(start+1, finish);
        }
}

int main()
{
    imprime();
    return 0;
}
