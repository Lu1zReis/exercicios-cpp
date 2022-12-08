#include <iostream>

using namespace std;
void menu(string *frase, int *tamanho, char *letra) {
    cout << "BEM VINDO AO JOGO DA FORCA" << endl;
    cout << *frase;//tamanho << pos << endl;
    cout << *tamanho;
    cout << *letra;
}
int main()
{
    // para ajudar a variar o random
    srand(time(0));

    // VARIAVEIS
    char frases[3][30] = {"arvore ", "teclado ", "blackpink "};
    int posEscolhida = rand()%3, cont = 0;
    string frase = frases[posEscolhida];

    // DESCOBRINDO O TAMANHO
    while(frase[cont] != ' ') {
        cont++;
    }

    menu(&frase, &cont, &frase[0]);
    return 0;
}
