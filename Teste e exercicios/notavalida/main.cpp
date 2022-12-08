#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float nota[2], teste, media;
    int i = 0;
    while (true) {

        cin >> teste;
        if(teste >= 0 and teste <= 10) {
            nota[i] = teste;
            i ++;
        }
        else {
            cout << "nota invalida" << endl;
        }
        if(i > 1){
            break;
        }
    }
    media = (nota[0] + nota[1]) / 2;
    cout << setprecision(3) << "media = " << media << endl;
    return 0;
}
