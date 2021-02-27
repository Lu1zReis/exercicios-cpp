#include <iostream>

using namespace std;

int main()
{

    int num[5], par = 0;

    for(int i = 0; i < 5; i++){
        cin >> num[i];
        if(num[i] % 2 == 0){
            par+=1;
        }
    }

    cout << par << " valores pares" << endl;

    return 0;
}
