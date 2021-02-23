#include <iostream>

using namespace std;

int main()
{
    int k = 7;
    for(int i = 1; i < 10; i+=2){
        for(int c = k; c > k-3; c--){
            cout << "I=" << i << " J=" << c << endl;
        }
        k += 2;
    }

    return 0;
}
