#include <iostream>

using namespace std;

int main()
{

    int tempoInicio[1], tempoFim[1], Duracao;

    cin >> tempoInicio[1];
    cin >> tempoFim[1];

    if(tempoInicio[1] < tempoFim[1]){
        Duracao = tempoFim[1] - tempoInicio[1];
    }

    if(tempoFim[1] < tempoInicio[1]){
        Duracao = (24 - tempoInicio[1]) + tempoFim[1];
    }
    if(tempoInicio[1] == tempoFim[1]){
        Duracao = 24;
    }

    cout << "O JOGO DUROU " << Duracao << " HORA(S)" << endl;

    return 0;
}
