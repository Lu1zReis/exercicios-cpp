#include <iostream>
#include <math.h>

using namespace std;

void ExibirValores(float Luiz, double Nai, double Cassio){
    cout.precision(3);
    cout << "Nspt = " << Nai << endl;
    cout << "Aa = " << Cassio << " kgf/cm2" << endl;
    cout << "a = " << Luiz << " cm" << endl;
}

int main()
{

    double Nai, Cassio, var[3], var1[3], var_1, var_2;
    float kN, kgf, Luiz;
    char aux;

    for(int j=0; j<2; j++){
        if(j == 0){
            cout << "Digite 3 valores" << endl;
            for(int i = 0; i < 3; i++){
                cout << "\nDigite o valor " << i+1 << ": " << endl;
                cout << "Digite a profundidade: ";
                cin >> var1[i];
                cout << "Digite o tamanho escavado: ";
                cin >> var[i];
            }
            cout << "O valor eh KGF? [S] ou [N]: ";
            cin >> aux;
            if(toupper(aux) == 'S'){
                cout << "\nDigite o valor em kgf: ";
                cin >> kgf;
            }else{
                cout << "\nDigite o valor de kN: ";
                cin >> kN;
                kgf = kN * 100;

            }

            Nai = ((var[0] * var1[0]) + (var[1] * var1[1]) + (var[2] * var1[2])) / 3;
            Cassio = Nai / 5;
            Luiz = sqrt(kgf/Cassio);

            ExibirValores(Luiz, Nai, Cassio);

        }
        else{
            cout << "\nDigite o quarto (4) valor" << endl;
            cout << "Digite a profundidade: ";
            cin >> var_1;
            cout << "Digite o tamanho escavado: ";
            cin >> var_2;
            Nai = ((var[0] * var1[0]) + (var[1] * var1[1]) + (var[2] * var1[2]) + (var_1 * var_2)) / 4;
            Cassio = Nai / 5;
            Luiz = sqrt(kgf/Cassio);

            ExibirValores(Luiz, Nai, Cassio);
        }


    }

    return 0;
}
