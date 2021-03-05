#include <iostream>

using namespace std;

int main()
{

    float k = 1;

    for(float i = 0; i < 2.2; i+=0.2){
        for(float j = k; j < k+3; j++){
            cout << "I=" << i << " J=" << j << endl;
        }
        k += 0.2;
    }

    return 0;
}
