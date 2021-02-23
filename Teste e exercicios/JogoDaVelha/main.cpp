#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void tabuleiro(char casa[3][3]){ // aqui vai ficar o tabuleiro pronto

    system("cls");
    printf("\t %c | %c | %c \n", casa[0][0], casa[0][1], casa[0][2]);
    cout << "\t-----------\n";
    printf("\t %c | %c | %c \n", casa[1][0], casa[1][1], casa[1][2]);
    cout << "\t-----------\n";
    printf("\t %c | %c | %c \n", casa[2][0], casa[2][1], casa[2][2]);

}

int main()
{
    // Variaveis
    char res;
    int cont_jogadas, l, c, vez = 0, i, j;

    char casas[3][3];

    do{
        cont_jogadas = 1;
        for(i = 0; i <= 2; i++){
            for(j = 0; j <= 2; j++){
               casas[i][j] = ' '; // aqui limpamos o tabuleiro
            }
        }
        do{
            tabuleiro(casas);
            if(vez%2==0){ // usamos o resto da divisão para sabermos qual será o proximo jogador a jogar
                cout << "Vez do jogador 'X'\n";
            }else{
                cout << "Vez do jogador 'O'\n";
            }
            cout << "Digite a linha: ";
            cin >> l;
            cout << "Digite a coluna: ";
            cin >> c;

            if(l < 1 || c < 1 || l > 3 || c > 3){ // Isso quer dizer que ele digitou um valor invalido
                l = 0;
                c = 0;
            }else if(casas[l-1][c-1] != ' '){ // se ele jogar em uma casa ocupada não vai adicionar
                l = 0;
                c = 0;

                // se o usuario digitou tudo certo, o jogo continua
            }else{
                if(vez%2 == 0){
                    casas[l-1][c-1] = 'X'; // [valor - 1] significa que quando o usuario colocar linha 1 coluna 1, vai ser na verdade, linha e coluna 0
                }else{
                    casas[l-1][c-1] = 'O';
                }
                vez++; // aqui passamos para ir rolando a divisao e quando ela for par por exemplo, na proxima é o proximo jogador
                cont_jogadas++; // adicionamos sempre esse valor ate chegar a 9 e sair do laco ou um jogador ganhar
            }
       //  cont_jogada esta sendo indicado esse numero para poder sair do laço de repeticao e depois sabermos quem venceu com um desses numeros
       // Aqui em baixo estão as condicoes de vitoria
            if(casas[0][0]=='X' && casas[0][1]=='X' && casas[0][2]=='X'){cont_jogadas = 11;}
            if(casas[1][0]=='X' && casas[1][1]=='X' && casas[1][2]=='X'){cont_jogadas = 11;}
            if(casas[2][0]=='X' && casas[2][1]=='X' && casas[2][2]=='X'){cont_jogadas = 11;}
            if(casas[0][0]=='X' && casas[1][0]=='X' && casas[2][0]=='X'){cont_jogadas = 11;}
            if(casas[0][1]=='X' && casas[1][1]=='X' && casas[2][1]=='X'){cont_jogadas = 11;}
            if(casas[0][2]=='X' && casas[1][2]=='X' && casas[2][2]=='X'){cont_jogadas = 11;}
            if(casas[0][0]=='X' && casas[1][1]=='X' && casas[2][2]=='X'){cont_jogadas = 11;}
            if(casas[0][2]=='X' && casas[1][1]=='X' && casas[2][0]=='X'){cont_jogadas = 11;}

            if(casas[0][0]=='O' && casas[0][1]=='O' && casas[0][2]=='O'){cont_jogadas = 12;}
            if(casas[1][0]=='O' && casas[1][1]=='O' && casas[1][2]=='O'){cont_jogadas = 12;}
            if(casas[2][0]=='O' && casas[2][1]=='O' && casas[2][2]=='O'){cont_jogadas = 12;}
            if(casas[0][0]=='O' && casas[1][0]=='O' && casas[2][0]=='O'){cont_jogadas = 12;}
            if(casas[0][1]=='O' && casas[1][1]=='O' && casas[2][1]=='O'){cont_jogadas = 12;}
            if(casas[0][2]=='O' && casas[1][2]=='O' && casas[2][2]=='O'){cont_jogadas = 12;}
            if(casas[0][0]=='O' && casas[1][1]=='O' && casas[2][2]=='O'){cont_jogadas = 12;}
            if(casas[0][2]=='O' && casas[1][1]=='O' && casas[2][0]=='O'){cont_jogadas = 12;}

        }while(cont_jogadas <= 9);
        tabuleiro(casas);
        if(cont_jogadas == 10){
            cout << "\n<----------EMPATE---------->\n";
        }
        if(cont_jogadas == 11){
            cout << "\n<----------VITORIA DO JOGADOR X---------->\n";
        }
        if(cont_jogadas == 12){
            cout << "\n<----------VITORIA DO JOGADOR O---------->\n";
        }
        cout << "Deseja continuar? [S-N]\n";
        cin >> res;

    }while(res == 's');


    return 0;
}
