#include <iostream>

using namespace std;

int main()
{
    // esquerda <-para-> direita "e" cima <-para-> baixo
    int aux=0;
    int tabuleiro[8][8] = {}, posi[2][2], valores[aux], andou=0;

    cin >> posi[0][0] >> posi[0][1] >> posi[1][0] >> posi[1][1];

    while(posi[0][0] != 0 && posi[0][1] != 0 && posi[1][0] != 0 && posi[1][1] != 0) {

        if(posi[0][0] % 2 == 0 && posi[0][1] % 2 == 0 || posi[0][0] % 2 == 1 && posi[0][1] % 2 == 1) {

            if(posi[1][0] % 2 == 0 && posi[1][1] % 2 == 0 || posi[1][0] % 2 == 1 && posi[1][1] % 2 == 1) {

                if(posi[0][0] != posi[1][0] && posi[0][1] != posi[1][1]) {
                    andou+=1;
                } else {
                    andou = 0;
                }

            } else {

                if(posi[0][0] > posi[1][0] || posi[0][0] < posi[1][0]) {
                    andou+=1;
                } if(posi[0][1] > posi[1][1] || posi[0][1] < posi[1][1]) {
                    andou+=1;
                }

            }

        }

        else if(posi[0][1] == posi[1][1] || posi[0][0] == posi[1][0] && andou>0){
            andou += 1;
        } else {
            andou += 2;
        }
        cout << andou << endl;

        cin >> posi[0][0] >> posi[0][1] >> posi[1][0] >> posi[1][1];

        if(posi[0][0] != 0 && posi[0][1] != 0 && posi[1][0] != 0 && posi[1][1] != 0) {
            valores[aux] = andou; // bug de armazenar valor no vetor
        }

        aux++;
        andou=0;

    }


    return 0;
}
