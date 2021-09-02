#include <iostream>

using namespace std;

int main()
{
    int tempo[4];
    int erro[2];
    int form = 0;
    int maiorH = 0, menorH = 0, maiorM = 0, menorM = 0;

    for(int i = 0; i < 4; i++) {
        cin >> tempo[i];
        if(i+1 == 4){
            if(tempo[0] > tempo[2]) {
                maiorH = tempo[0];
                menorH = tempo[2];
            }
            if(tempo[1] > tempo[3]) {
                maiorM = tempo[1];
                menorM = tempo[3];
            }
            if(tempo[0] < tempo[2]) {
                menorH = tempo[0];
                maiorH = tempo[2];
            }
            if(tempo[1] < tempo[3]) {
                menorM = tempo[1];
                maiorM = tempo[3];
            }
        }
    }

    for(int k = 0; k < 4; k+=2) {
        if(tempo[k] < 0) {
            erro[0] = 1;
        }
        if(tempo[k] > 23) {
            erro[1] = 1;
        }
    }
    if(erro[0] != 1 & erro[1] != 1) {
        if(tempo[0] == tempo[2]) {
            if(tempo[1] == tempo[3]) {
                if(tempo[0] == 0 and tempo[1] == 0) {
                    exit(0);
                }else{
                    form = (24 * 60);
                }
            }
            else{
                form = (24 * 60) - (maiorM - menorM);
            }
        }
        else {
            if(tempo[0] == 0) {
                if(tempo[2] > tempo[0]) {
                    int j = 0;
                    while(j <= tempo[2]) {
                        j += 1;
                    }
                    if(j >= 24) {
                        j = j - 23;
                    }else{
                        j = 24 - j;
                    }
                    form = (j * 60) - (maiorM - menorM);

                }else {
                    form = maiorM - menorM;
                }
            }
            else if(tempo[2] == 0) {
                if(tempo[0] > tempo[2]) {
                    int p = 0;
                    while(p <= tempo[0]) {
                        p += 1;
                    }
                    if(p >= 24) {
                        p = p - 23;
                    }else{
                        p = 24 - p;
                    }
                    form = (p * 60) - (maiorM - menorM);

                }else {
                        form = maiorM - menorM;
                }
            }
            else{
                if(tempo[1] == tempo[3]) {
                    form = (maiorH - menorH) * 60;
                }else{
                    form = ((maiorH - menorH) * 60) - (maiorM - menorM);
                }
            }
        }
    }
    cout << form << endl;
    return 0;
}
