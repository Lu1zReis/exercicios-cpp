#include <iostream>

using namespace std;

int main()
{

    int hora = 0, minuto = 0, segundo = 0;

    cin >> segundo;

    while(segundo >= 60){
        segundo -= 60;
        minuto += 1;
    }

    while(minuto >= 60){
        minuto -=60;
        hora += 1;

    }


    cout << hora << ":"<< minuto << ":" << segundo << endl;

    return 0;
}
