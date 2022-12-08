#include <iostream>

using namespace std;

void dados(int *venc, int *vitInt, int *vitGre, int *empates) {

    if(venc == 1) {
        *vitInt += 1;
    }

    else if(venc == 2) {
        *vitGre += 1

    }else {
        *empates += 1;
    }
}

int novoGrenal(int *inter, int *gremio, int *venc) {
    if(*inter > *gremio) {
        *venc = 1;
    }
    else if(*gremio > *inter) {
        *venc = 2

    }else {
        *venc = 0;
    }
    return *venc;
}

int main()
{
    int inter = 0, gremio = 0, vitInt = 0, vitGre = 0, empates = 0, maiorVencedor = 0, venc = 0;
    int ler;

    cin >> inter >> gremio;
    novoGrenal(&inter, &gremio, &venc);
    dados(&venc);

    while (true) {
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> ler;
        if (ler == 1) {
            cin >> inter >> gremio;

            novoGrenal(&inter, &gremio, &venc);
            dados(&venc);

        } else {
            break;
        }
    }

    return 0;
}
