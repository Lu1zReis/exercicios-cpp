#include <iostream>

using namespace std;

int main()
{
    cout << "informe um numero" << endl;
    float time;
    cin >> time;
    if(time>=5 and time<=12){
        cout << "dia" << endl;
        cout << "o que voce vai fazer hoje?\n";
        }
        if(time>=13 and time<=18){
            cout << "tarde" << endl;
        }
        else{
            cout << "noite" << endl;
        }
    return 0;
}
