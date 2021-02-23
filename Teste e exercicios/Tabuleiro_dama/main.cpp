#include <iostream>

using namespace std;

int main()
{

    int x1, y1, posx1, posy1;
    int x2, y2, posx2, posy2;
    int valor = 0;

    cin >> x1; // LINHA iniciais
    cin >> y1; // COLUNA iniciais

    cin >> x2; // LINHA finais
    cin >> y2; // COLUNA finais

    posx1 = x1 % 2;
    posy1 = y1 % 2;
    posx2 = x2 % 2;
    posy2 = y2 % 2;

    if(posx1 == 1){
        valor = 1;
    }
    if(x1 == x2 and y1 == y2){
        valor = 0;
    }
    else{
        valor = 2;
    }
    /*

    if(x2 == y2){
        valor = 1;
    }
    if(x1 == x2){
        valor = 1;
    }
    if(y1 == y2){
        valor = 1;
    }
    else{
        valor = 2;
    }

    */
    cout << valor << endl;

    return 0;
}
