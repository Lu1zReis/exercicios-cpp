#include <iostream>

using namespace std;

int main()
{

    int x = 0, y = 0;
    int restX[4], restY[4], valor[4], valorInv[4], somaX = 0, somaY = 0, res = 0;

    cin >> x;
    cin >> y;

    for(int i = 0; i < 4; i++){
        if(x % 2 == false){
            restX[i] = 0;
            somaX+=0;
        }
        if(x % 2 == true){
            restX[i] = 1;
            somaX+=1;
        }
        if(y % 2 == false){
            restY[i] = 0;
            somaY+=0;
        }
        if(y % 2 == true){
            restY[i] = 1;
            somaY+=1;
        }
        x = x / 2;
        y = y / 2;
    }

    for(int j = 0; j < 4; j++){
        cout << restX[j];
    }

    cout << endl;

    for(int k = 0; k < 4; k++){
//        cout << restY[k];
    }

    // Somar os valores

    for(int s = 0; s < 4; s++){
        valor[s] = restX[s] + restY[s];
        if(valor[s] == 2){
            valor[s] = 10;
        }
    }
/*
    cout << endl;
*/
    for(int h = 0; h < 4; h++){
 //       cout << valor[h];
        if(valor[h] >= 1){
            if(h == 0){
                res += 1;
            }
            if(h == 1){
                res += 2;
            }
            if(h == 2){
                res += 4;
            }
            if(h == 3){
                res += 8;
            }
        }
    }
 //   cout << res << endl;
//    cout << "\nO valor da somaX eh: " << somaX << endl;
//    cout << "\nO valor da somaY eh: " << somaY << endl;
    return 0;
}
