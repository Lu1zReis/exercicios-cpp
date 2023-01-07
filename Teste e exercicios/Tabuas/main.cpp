#include <iostream>

using namespace std;

// usando essa var global para caso seja verdadeiro, pegar o valor da função construindoChaoHorizontal()
int resul;

// usando essa funcão para verificar se há como construir o chão
bool construindoChaoHorizontal(int *tabuas, int *q, int *l, int *c, int *lT)
{
    int larg = *l, comp = *c, largTabua = *lT, qnt = *q;
    int piso = 0; // essa variavel que ira definir se conseguimos montar o piso

    for(int j = 0; j < qnt; j++) {

        if(tabuas[j] == comp) {
           piso++;
        }

        else {
            if(tabuas[j] < comp) {
                // aqui vamos pegar a posição da menor tabua e buscar uma que caiba e seja igual a ela
                // para colocarmos no comprimento
                int i = j+1;
                int aux = tabuas[j] + tabuas[i];
                while(aux != comp or i < qnt) {
                    i++;
                    aux = tabuas[j] + tabuas[i];
                }
                if(aux == comp) {
                    piso++;
                }
            }
        }
    }

    resul = piso;
    cout << piso << endl;

    return true;

}

int main()
{

    int largura, comprimento, lTabua, qnt, tabuas[10000] = {};

    cin >> largura >> comprimento;

    while(largura != 0 and comprimento != 0) {

        cin >> lTabua;
        cin >> qnt;

        for(int i = 0; i < qnt; i++) {
            cin >> tabuas[i];
        }

        if(construindoChaoHorizontal(tabuas, &qnt, &largura, &comprimento, &lTabua)) {
            cout << "resul " << resul << endl;
        }

        cin >> largura >> comprimento;
    }

    return 0;
}
