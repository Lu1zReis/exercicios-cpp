#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int lin=0, col=0;
    float pivo, aux;
    float vetor[3][3]={}, nVetor[3][3]={};
    cout << float(1.0/4) << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << i << " " << j << " - ";
            cin >> vetor[i][j];
        }
    }

    // transformando a diagonal [0][0] em 1

    if(vetor[0][0]==1) {
        vetor[0][0]=1;
    }else {
        pivo = vetor[0][0];
        for(int h=0; h<3; h++){
            vetor[0][h] *= 1/pivo;
        }
    }

    cout << vetor[0][0] << "|" <<vetor[0][1] << "|" << vetor[0][2] << endl;
    cout << vetor[1][0] << "|" <<vetor[1][1] << "|" << vetor[1][2] << endl;
    cout << vetor[2][0] << "|" <<vetor[2][1] << "|" << vetor[2][2] << endl;
    cout << endl;

    // zerando os valores abaixo do pivo [0][0]
    for(int l=0; l < 3; l++){
        aux = vetor[l][0];
        for(int c=0; c<3; c++) {
            if(l == 1) {
                cout << vetor[l][c] << "=" << vetor[l][c] << "-(" << vetor[l-1][c] << "x" << aux << ") - ";
                vetor[l][c] = vetor[l][c] - (vetor[l-1][c] * aux);
                cout << vetor[l][c] << endl;
            }else if(l == 2) {
                cout << vetor[l][c] << "=" << vetor[l][c] << "-(" << vetor[l-2][c] << "x" << aux << ")"<<endl;
                vetor[l][c] = vetor[l][c] - (vetor[l-2][c] * aux);
            }
        }
    }


    cout << vetor[0][0] << "|" <<vetor[0][1] << "|" << vetor[0][2] << endl;
    cout << vetor[1][0] << "|" <<vetor[1][1] << "|" << vetor[1][2] << endl;
    cout << vetor[2][0] << "|" <<vetor[2][1] << "|" << vetor[2][2] << endl;
    cout << endl;

    // transformando a diagonal [1][1] em 1

    if(vetor[1][1]==1) {
        vetor[1][1]=1;
    }else {
        pivo = vetor[1][1];
        for(int h=0; h<3; h++){
            vetor[1][h] *= 1/pivo;
        }
    }

    // mostrando os valores
    cout << endl;
    cout << vetor[0][0] << " " <<vetor[0][1] << " " << vetor[0][2] << endl;
    cout << vetor[1][0] << " " <<vetor[1][1] << " " << vetor[1][2] << endl;
    cout << vetor[2][0] << " " <<vetor[2][1] << " " << vetor[2][2] << endl;
    return 0;

}
