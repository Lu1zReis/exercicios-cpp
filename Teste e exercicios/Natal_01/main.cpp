#include <iostream>

using namespace std;

int main()
{

    int g = 0, b = 0, resto, aux = 0;
    cin >> b;
    cin >> g;

    resto = g / 2;

    if(b >= resto){
        cout << "Amelia tem todas bolinhas!" << endl;
    }
    else{
        for(int i = 0; i < resto; i++){
            if(resto == b){
                cout << "Faltam " << aux << " bolinha(s)" << endl;
            }
            aux++;
            b++;
        }
    }

    return 0;
}
