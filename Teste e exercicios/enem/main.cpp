#include <iostream>
using namespace std;
 // VAR GLOBAIS
int a=0, b=0, c=0, d=0, e = 0;

 // FUNÇÃO DE CONTAGEM DOS DADOS GLOBAIS
void contagem(char x) {

    if(x == 'a') {
        a += 1;
    }
    if(x == 'b') {
        b += 1;
    }
    if(x == 'c') {
        c += 1;
    }
    if(x == 'd') {
        d += 1;
    }
    if(x == 'e') {
        e += 1;
    }
}
int main()
{
    char gabarito[10] = {'a', 'b', 'c', 'd', 'a', 'e', 'd', 'b', 'c', 'e'};
    char resposta[10];
    float form = 0;

    for(int i = 0; i < 10; i++) {
        cin >> resposta[i];
        contagem(resposta[i]);
        if(i >= 9) {
            cout << "=======DADOS=======" << endl;
            cout << "A: " << a << endl;
            cout << "B: " << b << endl;
            cout << "C: " << c << endl;
            cout << "D: " << d << endl;
            cout << "E: " << e << endl;
        }
    }

    return 0;
}
