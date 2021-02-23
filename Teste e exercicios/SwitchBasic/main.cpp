#include <iostream>

using namespace std;

int main()
{
    int A;

    cout << "Informe um numero, dentro de 1 a 5" << endl;
    cin >> A;
//essa estrutura eh melhor para escolher determinada funcao, e nao achar entre true ou false
    switch (A){
case 1://nos podemos colocar no case valores numericos ou char, depende do que queremos ler no cin, que é a entrada
    cout << "Voce escolheu o primeiro numero" <<endl;
    break;//isso é a saída da estrutura, caso ache o valor

case 2:
    cout << "Voce escolheu o segundo numero" <<endl;
    break;

case 3:
    cout << "Voce escolheu o terceiro numero" <<endl;
    break;

case 4:
    cout << "Voce escolheu o quarto numero" <<endl;
    break;

case 5:
    cout << "Voce escolheu o ultimo numero" <<endl;
    break;

    default://essa parte é tipo o else, serve para caso, nenhuma dessas var sejam lidas
        cout << "voce nao escolheu entre 1 a 5, voce escolheu "<< A << endl;

    }
    return 0;
}
