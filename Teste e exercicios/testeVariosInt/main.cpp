#include <stdio.h>
using namespace std;
int main() {

    int par, impar, positivo, negativo, valor[5] = {}, resto;

/*  cin >> valor[0];
    cin >> valor[1];
    cin >> valor[2];
    cin >> valor[3];
    cin >> valor[4];
*/
    for(int i = 0; i < 5; i++){
        cin >> valor[i];
        if(valor[i] > 0){
            positivo += 1;
        }
        if(valor[i] < 0){
            negativo += 1;
        }
        if(valor[i] % 2 == 0){
            par += 1;
        }
        else{
            impar += 1;
        }
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;

    return 0;
}
