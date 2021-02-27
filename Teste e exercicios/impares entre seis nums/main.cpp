#include <iostream>

using namespace std;

int main()
{

    int num = 0, i = 0;
    cin >> num;

    while(i < 6){
        if(num % 2 == 1){
            cout << num << endl;
            i+=1;
        }
        num++;
    }

    return 0;
}
