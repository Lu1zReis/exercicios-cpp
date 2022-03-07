#include <iostream>

using namespace std;

int main()
{
    int entrada = 0;
    cin >> entrada;
    for(int i = 1; i < entrada+1; i++) {
        for(int k =0; k < 2; k ++) {
            if(k==0)
                cout << i << " " << i*i << " " << i*i*i<<endl;
            else
                cout << i << " " << (i*i)+1 << " " << (i*i*i)+1 <<endl;
        }
    }
    return 0;
}
