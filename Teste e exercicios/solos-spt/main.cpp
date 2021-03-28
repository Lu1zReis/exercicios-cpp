#include <iostream>
#include <math.h>

using namespace std;

void ExibirValores(float Luiz = 0, double Nai = 0, double Cassio = 0){
    cout.precision(3);
    cout << "Nspt = " << Nai << endl;
    cout << "Aa = " << Cassio << " kgf/cm2" << endl;
    cout << "a = " << Luiz << " cm" << endl;
}

int main()
{

    float Nai=0, Cassio=0, var1[3], var_1;
    float kN, kgf, Luiz=0;
    char aux;

    for(int j=0; j<2; j++){
        if(j == 0){
            cout << "Digite 3 valores" << endl;
            for(int i = 0; i < 3; i++){
                cout << "\nDigite o valor " << i+1 << ": " << endl;
                cout << "Digite a profundidade: ";
                cin >> var1[i];
            }
            cout << "O valor eh KGF? [S] ou [N]: ";
            cin >> aux;
            if(toupper(aux) == 'S'){
                cout << "\nDigite o valor em kgf: ";
                cin >> kgf;
            }else{
                cout << "\nDigite o valor de kN: ";
                cin >> kN;
                kgf = kN * 1000;

            }

            Nai = (var1[0] + var1[1] + var1[2]) / 3;
            Cassio = Nai / 5;
            Luiz = sqrt(kgf/Cassio);

            ExibirValores(Luiz, Nai, Cassio);

        }
        else{
            cout << "\nDigite o quarto (4) valor" << endl;
            cout << "Digite a profundidade: ";
            cin >> var_1;
            Nai = (var1[0] + var1[1] + var1[2] + var_1) / 4;
            Cassio = Nai / 5;
            Luiz = sqrt(kgf/Cassio);

            ExibirValores(Luiz, Nai, Cassio);
        }


    }

    return 0;
}
