#include <iostream>

using namespace std;

int len(int *vetor, int *qnt)
{
    int tam = 0;
    for(int k = 0; k < *qnt; k++)
    {
        tam += vetor[k];
    }
    return tam;
}

int resul(int *homemQnt, int *saltos)
{
    int tam = *homemQnt, salto = *saltos;
    int vet[tam] = {}, aux1 = 0, t = 0;
    int i, cont = 0, k=0, valAnterior=0;

    // colocando valores no vetor pos
    for(int j = 0; j < tam; j++)
    {
        vet[j] = 1;
    }

    i = salto-1;
    cont = len(vet, &tam);
    aux1 = len(vet, &tam);

    while(len(vet, &tam) > 1)
    {
        cout << i << "-" << vet[i] << "\n";

        vet[i] = 0;
        k = i;

        for(int o = k+1; o < aux1; o++)
        {
            if(o <= aux1) {
                cout << "o: " << o << " cont: " << cont << endl;
                if(vet[o]==0) {
                    i++;
                    t = 1;
                    cout << "i: " << i << " o: " << o << endl;
                }
            } else {
                int aux = o - cont;
                cout << "aux " << aux << endl;
                if(vet[aux]==0) {
                    cout << "aux: " << aux << endl;
                    i++;
                    t = 1;
                    cout << "i "<< i << endl;
                }
            }
        }

        i += salto;
        if(t == 1) {
            if(i < aux1) {
                vet[i] = 0;
                t = 0;
            } else {
                t = 2;
            }
        }
        cout << i << endl;

        if(i >= cont)
        {
            cout << "atualizando" << endl;
            cout << i << cont << endl;
            i = i - cont;
            cont = len(vet, &tam);
            /*
            if(t == 2) {
                vet[i] = 0;
                t = 0;
            }
            */
            cout << i << " " << cont << " " << tam << endl;
            while(vet[i] == 0)
            {
                i++;
            }

        }
    }
    cout << "\n--------------\n";
    for(int l=0; l < tam; l++)
    {
        cout << vet[l] << " ";
    }

}

int main()
{

    int salto, homens, qnt;

    cin >> qnt;

    for(int i=0; i < qnt; i++)
    {
        cin >> homens >> salto;
        resul(&homens, &salto);
    }

    return 0;
}
