#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int x;
    cin >> x;
    int resto[x];

    for(int i = 0; i <= x; i++){

        if(i % 2 != 0 or i == 0){
        }else{
            cout << i << "^" << "2" << " = " << pow(i, 2) << endl;
        }

    }

    return 0;
}
