#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int contaDia, contaHora, contaMinu, contaSeg;
    int diaInicial, diaFinal, horaIni, horaFin, minuIni, minuFin, segIni, segFin;
    cout << "Dia ";
    cin >> diaInicial;
    scanf("%d : %d : %d", &horaIni, &minuIni, &segIni);

    cout << "Dia ";
    cin >> diaFinal;
    scanf("%d : %d : %d", &horaFin, &minuFin, &segFin);

    contaDia = diaFinal - diaInicial;
    contaHora = (24 + horaFin) - horaIni;
    contaMinu = minuIni + minuFin;
    contaSeg = segIni + segFin;

    if(contaSeg <= 60){
        if(segFin >= segIni){
            contaSeg = segFin - segIni;
        }else{
            contaSeg = segIni - segFin;
        }
    }
    if(contaMinu <= 60){
        if(minuFin >= minuIni){
            contaMinu = minuFin - minuIni;
        }else{
            contaMinu = minuIni - minuFin;
        }
    }
    if(contaHora <= 24){
        contaDia -= 1;
    }

    while(contaSeg >= 60){
        contaSeg = contaSeg - 60;
        contaMinu += 1;
    }
    while(contaMinu >= 60){
        contaMinu = contaMinu - 60;
        contaHora += 1;
    }
    while(contaHora >= 24){
        contaHora = (contaHora - 24);
        contaDia += 1;
    }


    cout << contaDia << " dia(s)" << endl;
    cout << contaHora << " hora(s)" << endl;
    cout << contaMinu << " minuto(s)" << endl;
    cout << contaSeg << " segundo(s)" << endl;

    return 0;
}
