#include <iostream>

using namespace std;

int main()
{
    float k = 1;
    int r = 0;

    for(float i = 0; i < 2.2;){
        cout << "I=" << i << " J=" << k << endl;
        if(i < 0.6)
        {
            if(k < 3)
            {
                k += 1;
            }
            if(k >= 3)
            {
                i += 0.2;
                k = 0;
                k += 1.2;
            }
        }
        else
        {
            k += 0.2;
            i += 0.2;
        }
    }

    return 0;
}
