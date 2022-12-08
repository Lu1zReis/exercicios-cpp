#include <iostream>

using namespace std;

int conTempo(int *tI, int *tF, int *form) {

    int contHora;

    if(*tI < *tF) {
        contHora = *tF - *tI;
    }
    else {
        contHora = *form - (*tI - *tF);
    }

    return contHora;
}

int main()
{
    int hora[2], minut[2], contHora=0, contMinu=0, formH=24, formM=60;

    cin >> hora[0] >> minut[0] >> hora[1] >> minut[1];

    contHora = conTempo(&hora[0], &hora[1], &formH);
    contMinu = conTempo(&minut[0], &minut[1], &formM);

    if(contMinu == 60) {
        contMinu = 0;
        //contHora++;
    }
    else if(contMinu > 60) {
        contMinu -= 60;
        contHora++;
    }
    else if(minut[0] > minut[1]) {
        contHora--;
    }

    cout << "O JOGO DUROU " << contHora << " HORA(S) E " << contMinu << " MINUTO(S)" << endl;
    return 0;
}
