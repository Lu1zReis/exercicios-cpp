#include <iostream>

using namespace std;

void FuncPar_Impar(int valor, string *ParImpar) {
    if(valor % 2 == 0)
    {
        *ParImpar = "EVEN";
    }
    else
    {
        *ParImpar = "ODD";
    }

}

void FuncPos_Neg(int valor, string *PosNeg) {
    if(valor > 0)
    {
        *PosNeg = "POSITIVE";
    }
    if(valor < 0)
    {
        *PosNeg = "NEGATIVE";
    }
}

int main()
{
    int quant = 0;
    cin >> quant;

    // adicionando o tamanho da matrix valor[]
    int valor[quant], pos;
    string ParImpar[quant], PosNeg[quant], NUll[quant];

    for(int i = 0; i < quant; i++)
    {
        cin >> valor[i];
        if(valor[i] != 0){
            FuncPar_Impar(valor[i], &ParImpar[i]);
            FuncPos_Neg(valor[i], &PosNeg[i]);
        }else{
            pos = i;
        }
    }




    for(int j = 0; j < quant; j++)
    {
        if(pos != j) {
            cout << ParImpar[j] << " " << PosNeg[j] << endl;
        }
        else {
            cout << "NULL\n";
        }
    }

    return 0;
}
