#include <iostream>

using namespace std;

void entreVar(int x, int y, int *impar, int *soma) {
    int somando = 0, b = 0;
    if(x > y) { // 13 > 10
        *impar = 0;
        b = x - y;
        for(int a = 0; a < b; b++) {
            y += 1;
            cout << y << endl;
            *impar = y;
            if(y % 2 == 1) {
                if(x == y) {
                    somando -= y;
                    break;
                }else{
                    somando += y;
                }
            }
        }
    }
    else if(y > x) {
        *impar = 0;
        while(x < y) {
            if(x == y) {
                x += 0;
            }else{
                x += 1;
            }
            cout << x << endl;
            *impar = x;
            if(x % 2 == 1) {
                somando += x;
            }
        }
    }
    else {
        cout << 0 << endl;
    }

    *soma = somando;
}

int main()
{

    int n = 0, x = 0, y = 0, impares, soma;

    cin >> n;

    for(int i = 0; i < n; i++) {

        cin >> x;
        cin >> y;

        entreVar(x, y, &impares, &soma);

        if(impares == 0){
            cout << 0 << endl;
        }else {
            cout << soma << endl;
        }
    }

    return 0;
}
