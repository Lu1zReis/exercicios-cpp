#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{

    int inicio = 0, fim = 0;

    cin >> inicio;
    cin >> fim;

    if(inicio < fim){
        for(int i = inicio; i < fim; i++){
            if(i % 2 == 1){
                cout << i << endl;
                system("pause");
                exit(0);
            }
        }
    }
    if(inicio > fim){

        for(int i = inicio; i > fim; i--){
            if(i == inicio)
                i = inicio;
            else{
                if(i % 2 == 1){
                    cout << i << endl;
                    system("pause");
                    exit(0);
                }
            }
        }
    }

    else{
        cout << 0 << endl;
    }

    return 0;
}
