#include <iostream>

using namespace std;

// usando essa var global para caso seja verdadeiro, pegar o valor da função construindoChaoHorizontal()
int valoresFinais[100] = {};
string resuErro[100] = {};
int pisos[2] = {};

// usando essa funcão para verificar se há como construir o chão
bool construindoChao(int *tabuas, int *q, int *l, int *c, int *lT, int *pos=0)
{
    int larg = *l, comp = *c, largTabua = *lT, qnt = *q;
    int piso = 0, qntTabua=0, posi = *pos, posicao[qnt] = {}; // essa variavel piso que ira definir se conseguimos montar o piso

    for(int j = 0; j < qnt; j++) {
        if(posicao[j] == 0) {
            if(tabuas[j] == comp)
            {
               piso++;
               qntTabua++;
               posicao[j] = 1;
            }
            else {
                if(tabuas[j] < comp) {
                    // aqui vamos pegar a posição da menor tabua e buscar uma que caiba e seja igual a ela
                    // para colocarmos no comprimento
                    int aux=0;
                    for(int i = 0; i < qnt; i++) {
                        if(posicao[i] == 0) {
                            if(tabuas[j] + tabuas[i] == comp and (j != i)) {
                                aux = tabuas[j] + tabuas[i];
                                qntTabua+=2;
                                posicao[j] = 1;
                                posicao[i] = 1;
                                break;
                            }
                        }
                    }
                    if(aux == comp) {
                        piso++;

                        if(piso == larg) {
                            break;
                        }

                    }
                }
            }
        }
    }
    if(piso == larg) {
        pisos[posi] = qntTabua;
        return true;
    } else {
        return false;
    }

}

void setChao(bool *v1, bool* v2, int *posi) {
        int i = *posi;
        bool valVertical = *v1, valHorizontal = *v2;

        if(valVertical and valHorizontal) {
            if(pisos[0] < pisos[1]) {
                valoresFinais[i] = pisos[0];
            } else {
                valoresFinais[i] = pisos[1];
            }
        } else {
            if(valVertical) {
                valoresFinais[i] = pisos[0];
            }
            else if(valHorizontal) {
                valoresFinais[i] = pisos[1];
            } else {
                resuErro[i] = "impossivel";
            }
        }

}

void getChao(int *p) {
    int posi = *p;
    for(int i = 0; i < posi; i++) {
        if(valoresFinais[i] > 0) {
            cout << valoresFinais[i] << endl;
        } else {
            if(resuErro[i] == "impossivel") {
                cout << resuErro[i] << endl;
            }
        }
    }
}

int main()
{

    int posi = 0, k = 0, j = 1, largura, comprimento, lTabua, qnt, tabuas[1000] = {};
    bool valVertical, valHorizontal;
    cin >> largura >> comprimento;

    while(largura != 0 and comprimento != 0) {

        cin >> lTabua;
        cin >> qnt;

        for(int i = 0; i < qnt; i++) {
            cin >> tabuas[i];
        }

        valVertical = construindoChao(tabuas, &qnt, &largura, &comprimento, &lTabua, &k);
        valHorizontal = construindoChao(tabuas, &qnt, &comprimento, &largura, &lTabua, &j);
        setChao(&valVertical, &valHorizontal, &posi);

        cin >> largura >> comprimento;

        posi++;
    }

    getChao(&posi);


    return 0;
}
