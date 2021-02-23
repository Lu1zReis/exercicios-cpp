#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    for(int j = 60; j >= 0; j -= 5){
        for(int k = 0; k < 3; k++){
            i += 1;
        }
        cout << "I=" << i << " J=" << j << endl;
    }

    return 0;
}
