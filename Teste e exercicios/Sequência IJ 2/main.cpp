#include <iostream>

using namespace std;

int main()
{
    int k = 1;
    for(int i = 1; i < 10; i+=2){
        for(int c = 7; c >= 5; c--){
            cout << "I=" << i << " J=" << c << endl;
        }
    }

    return 0;
}
