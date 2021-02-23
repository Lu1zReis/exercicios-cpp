#include <iostream>

using namespace std;

int main()
{
    //do{

        int aux = 10;

        for(int i = 0; i <= aux; i++){
            for(int j = 0; j<=aux; j++){
                cout << (j)*i << " ";
                cout << (j)*i  << " ";
                cout << (j)*i << endl;
            }
        }

    return 0;
}
