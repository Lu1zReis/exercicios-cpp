#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n, n2, aux_player[2], aux_player2[2], cont = 0;

    // Lista de Pokemon
    int pikachu[2] = {40, 200};
    int volturb[2] = {25, 120};
    int pichu[2] = {27, 100};
    int metapod[2] = {10, 300};

    // Manipulacao dos Caracteres
    char nomePlayer[3], nomePlayer2[3];

    // Vetores para armazenar as escolhas
    int escolhaPlayer1[3], escolhaPok[3], escolhaPok1[3], escolhaPok2[3];
    int escolhaPlayer2[3], escolhaPok_Usu2[3], escolhaPok_Usu2_1[3], escolhaPok_Usu2_2[3];

    cout << "--------PLAYER 1--------\nEscolha 3 pokemon:\n1 - Pikachu, 2 - Volturb, 3 - Pichu, 4 - Metapod\nPrimeiro: ";
    cin >> escolhaPlayer1[0];
    cout << "Segundo: ";
    cin >> escolhaPlayer1[1];
    cout << "Terceiro: ";
    cin >> escolhaPlayer1[2];

    switch(escolhaPlayer1[0]){
case 1:
    escolhaPok[0] = pikachu[0]; // ataque
    escolhaPok[1] = pikachu[1]; // defesa
    nomePlayer[0] = 'P';
    break;
case 2:
    escolhaPok[0] = volturb[0]; // ataque
    escolhaPok[1] = volturb[1]; // Defesa
    nomePlayer[0] = 'V';
    break;
case 3:
    escolhaPok[0] = pichu[0]; // ataque
    escolhaPok[1] = pichu[1]; // Defesa
    nomePlayer[0] = 'p';
    break;
case 4:
    escolhaPok[0] = metapod[0];
    escolhaPok[1] = metapod[1];
    nomePlayer[0] = 'M';
    break;
default:
    cout << "Escolha invalida" << endl;

    }

    switch(escolhaPlayer1[1]){
case 1:
    escolhaPok1[0] = pikachu[0]; // ataque
    escolhaPok1[1] = pikachu[1]; // defesa
    nomePlayer[1] = 'P';
    break;
case 2:
    escolhaPok1[0] = volturb[0]; // ataque
    escolhaPok1[1] = volturb[1];
    nomePlayer[1] = 'V';
    break;
case 3:
    escolhaPok1[0] = pichu[0]; // ataque
    escolhaPok1[1] = pichu[1];
    nomePlayer[1] = 'p';
    break;
case 4:
    escolhaPok1[0] = metapod[0];
    escolhaPok1[1] = metapod[1];
    nomePlayer[1] = 'M';
    break;
default:
    cout << "Escolha invalida" << endl;

    }

    switch(escolhaPlayer1[2]){
case 1:
    escolhaPok2[0] = pikachu[0]; // ataque
    escolhaPok2[1] = pikachu[1]; // defesa
    nomePlayer[2] = 'P';
    break;
case 2:
    escolhaPok2[0] = volturb[0]; // ataque
    escolhaPok2[1] = volturb[1];
    nomePlayer[2] = 'V';
    break;
case 3:
    escolhaPok2[0] = pichu[0]; // ataque
    escolhaPok2[1] = pichu[1];
    nomePlayer[2] = 'p';
    break;
case 4:
    escolhaPok2[0] = metapod[0];
    escolhaPok2[1] = metapod[1];
    nomePlayer[2] = 'M';
    break;
default:
    cout << "Escolha invalida" << endl;

    }

    cout << "--------PLAYER 2--------\nEscolha 3 pokemon:\n1 - Pikachu, 2 - Volturb, 3 - Pichu, 4 - Metapod\nPrimeiro: ";
    cin >> escolhaPlayer2[0];
    cout << "Segundo: ";
    cin >> escolhaPlayer2[1];
    cout << "Terceiro: ";
    cin >> escolhaPlayer2[2];

    system("pause");
    system("cls");

    switch(escolhaPlayer2[0]){
case 1:
    escolhaPok_Usu2[0] = pikachu[0]; // ataque
    escolhaPok_Usu2[1] = pikachu[1]; // defesa
    nomePlayer2[0] = 'P';
    break;
case 2:
    escolhaPok_Usu2[0] = volturb[0]; // ataque
    escolhaPok_Usu2[1] = volturb[1]; // Defesa
    nomePlayer2[0] = 'V';
    break;
case 3:
    escolhaPok_Usu2[0] = pichu[0]; // ataque
    escolhaPok_Usu2[1] = pichu[1]; // Defesa
    nomePlayer2[0] = 'p';
    break;
case 4:
    escolhaPok_Usu2[0] = metapod[0];
    escolhaPok_Usu2[1] = metapod[1];
    nomePlayer2[0] = 'M';
    break;
default:
    cout << "Escolha invalida" << endl;


    }

    switch(escolhaPlayer2[1]){
case 1:
    escolhaPok_Usu2_1[0] = pikachu[0]; // ataque
    escolhaPok_Usu2_1[1] = pikachu[1]; // defesa
    nomePlayer2[1] = 'P';
    break;
case 2:
    escolhaPok_Usu2_1[0] = volturb[0]; // ataque
    escolhaPok_Usu2_1[1] = volturb[1]; // Defesa
    nomePlayer2[1] = 'V';
    break;
case 3:
    escolhaPok_Usu2_1[0] = pichu[0]; // ataque
    escolhaPok_Usu2_1[1] = pichu[1]; // Defesa
    nomePlayer2[1] = 'p';
    break;
case 4:
    escolhaPok_Usu2_1[0] = metapod[0];
    escolhaPok_Usu2_1[1] = metapod[1];
    nomePlayer2[1] = 'M';
    break;
default:
    cout << "Escolha invalida" << endl;


    }

    switch(escolhaPlayer2[2]){
case 1:
    escolhaPok_Usu2_2[0] = pikachu[0]; // ataque
    escolhaPok_Usu2_2[1] = pikachu[1]; // defesa
    nomePlayer2[2] = 'P';
    break;
case 2:
    escolhaPok_Usu2_2[0] = volturb[0]; // ataque
    escolhaPok_Usu2_2[1] = volturb[1]; // Defesa
    nomePlayer2[2] = 'V';
    break;
case 3:
    escolhaPok_Usu2_2[0] = pichu[0]; // ataque
    escolhaPok_Usu2_2[1] = pichu[1]; // Defesa
    nomePlayer2[2] = 'p';
    break;
case 4:
    escolhaPok_Usu2_2[0] = metapod[0];
    escolhaPok_Usu2_2[1] = metapod[1];
    nomePlayer2[2] = 'M';
    break;
default:
    cout << "Escolha invalida" << endl;


    }

    cout << "----------PLAYER 1, POKEMONS----------" << endl;
    cout << "O seu 1 pokemon foi: " << nomePlayer[0] << " com " << escolhaPok[0] << " de ataque e " << escolhaPok[1] << " de defesa" << endl;
    cout << "O seu 2 pokemon foi: " << nomePlayer[1] << " com "  << escolhaPok1[0] << " de ataque e " << escolhaPok1[1] << " de defesa" << endl;
    cout << "O seu 3 pokemon foi: " << nomePlayer[2] << " com "  << escolhaPok2[0] << " de ataque e " << escolhaPok2[1] << " de defesa\n" << endl;

    cout << "----------PLAYER 2, POKEMONS----------" << endl;
    cout << "O seu 1 pokemon foi: " << nomePlayer2[0] << " com " << escolhaPok_Usu2[0] << " de ataque e " << escolhaPok_Usu2[1] << " de defesa" << endl;
    cout << "O seu 2 pokemon foi: " << nomePlayer2[1] << " com "  << escolhaPok_Usu2_1[0] << " de ataque e " << escolhaPok_Usu2_1[1] << " de defesa" << endl;
    cout << "O seu 3 pokemon foi: " << nomePlayer2[2] << " com "  << escolhaPok_Usu2_2[0] << " de ataque e " << escolhaPok_Usu2_2[1] << " de defesa" << endl;

    while(1){
        // *Player 1
        // escolhaPok[] - Primeiro Pok
        // escolhaPok1[] - Segundo Pok
        // escolhaPok2[] - Terceiro Pok
        // *Player 2
        // escolhaPok_Usu2_2[] - Terceiro Pok
        // escolhaPok_Usu2_1[] - Segundo Pok
        // escolhaPok_Usu2[] - Primeiro

        system("pause");
        system("cls");

        cont ++;
        cout << "Rodada: " << cont << endl;

        cout << "                               BATALHA POKEMON                    " << endl;
        cout << "[ Poke = (" << nomePlayer[0] << ") A: " << escolhaPok[0] << " D: " << escolhaPok[1] << " ] - [ Poke = (" << nomePlayer[1]<< ") A: " << escolhaPok1[0] << " D: " << escolhaPok1[1] << " ] - [ Poke = (" << nomePlayer[2]<< ") A: " << escolhaPok2[0] << " D: " << escolhaPok2[1] << " ]" << endl;
        cout << "            |--------------------------------------------------|" << endl;
        cout << "            |                                                  |" << endl;
        cout << "            |                                                  |" << endl;
        cout << "            |                                                  |" << endl;
        cout << "            |                                                  |" << endl;
        cout << "            |                                                  |" << endl;
        cout << "            |                                                  |" << endl;
        cout << "            |-------------------------O------------------------|" << endl;
        cout << "            |                                                  |" << endl;
        cout << "            |                                                  |" << endl;
        cout << "            |                                                  |" << endl;
        cout << "            |                                                  |" << endl;
        cout << "            |                                                  |" << endl;
        cout << "            |                                                  |" << endl;
        cout << "            |--------------------------------------------------|" << endl;
        cout << "[ Poke = (" << nomePlayer2[0] << ") A: " << escolhaPok_Usu2[0] << " D: " << escolhaPok_Usu2[1] << " ] - [ Poke = (" << nomePlayer2[1]<< ") A: " << escolhaPok_Usu2_1[0] << " D: " << escolhaPok_Usu2_1[1] << " ] - [ Poke = (" << nomePlayer2[2]<< ") A: " << escolhaPok_Usu2_2[0] << " D: " << escolhaPok_Usu2_2[1] << " ]" << endl;

        cout << "\nPLAYER 1 - Deseja usar qual pokemon? 1_Pokemon / 2_Pokemon / 3_Pokemon" << endl;
        cin >> n;
        cout << "\nPLAYER 1 - Deseja atacar qual pokemon? 1_Pokemon / 2_Pokemon / 3_Pokemon" << endl;
        cin >> n2;

        if(n == 1){
            aux_player[0] = escolhaPok[0];
        }
        if(n == 2){
            aux_player[0] = escolhaPok1[0];
        }
        if(n == 3){
            aux_player[0] = escolhaPok2[0];
        }

        switch(n2){
        case 1:
            escolhaPok_Usu2[1] = escolhaPok_Usu2[1] - aux_player[0];
            break;
        case 2:
            escolhaPok_Usu2_1[1] = escolhaPok_Usu2_1[1] - aux_player[0];
            break;
        case 3:
            escolhaPok_Usu2_2[1] = escolhaPok_Usu2_2[1] - aux_player[0];
            break;
        default:
            cout << "Escolha Invalida" << endl;
            break;

        }

        cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";

        cout << "\nPLAYER 2 - Deseja usar qual pokemon? 1_Pokemon / 2_Pokemon / 3_Pokemon" << endl;
        cin >> n;
        cout << "\nPlAYER 2 - Deseja atacar qual pokemon? 1_Pokemon / 2_Pokemon / 3_Pokemon" << endl;
        cin >> n2;

        if(n == 1){
            aux_player[0] = escolhaPok_Usu2[0];
        }
        if(n == 2){
            aux_player[0] = escolhaPok_Usu2_1[0];
        }
        if(n == 3){
            aux_player[0] = escolhaPok_Usu2_2[0];
        }

            switch(n2){
        case 1:
            escolhaPok[1] = escolhaPok[1] - aux_player[0];
            break;
        case 2:
            escolhaPok1[1] = escolhaPok1[1] - aux_player[0];
            break;
        case 3:
            escolhaPok2[1] = escolhaPok2[1] - aux_player[0];
            break;
        default:
            cout << "Escolha Invalida" << endl;
            break;

        }

// Verificar se os pokémons nao morreram

        if(escolhaPok[1] <= 0){
            escolhaPok[0] = 0;
            escolhaPok[1] = 0;
        }
        if(escolhaPok1[1] <= 0){
            escolhaPok1[0] = 0;
            escolhaPok1[1] = 0;
        }
        if(escolhaPok2[1] <= 0){
            escolhaPok2[0] = 0;
            escolhaPok2[1] = 0;
        }

        if(escolhaPok_Usu2[1] <= 0){
            escolhaPok_Usu2[0] = 0;
            escolhaPok_Usu2[1] = 0;
        }
        if(escolhaPok_Usu2_1[1] <= 0){
            escolhaPok_Usu2_1[0] = 0;
            escolhaPok_Usu2_1[1] = 0;
        }
        if(escolhaPok_Usu2_2[1] <= 0){
            escolhaPok_Usu2_2[0] = 0;
            escolhaPok_Usu2_2[1] = 0;
        }

        if(escolhaPok_Usu2[1] == 0 and escolhaPok_Usu2_1[1] == 0 and escolhaPok_Usu2_2[1] == 0){
            system("pause");
            system("cls");
            cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-PARABÉNS AO JOGADOR 1-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\nAQUI ESTAO OS DADOS DA PARTIDA\n";
            cout << "Rodadas: " << cont << endl;
            cout << "Pokemons: " << nomePlayer[0] << " / " << nomePlayer[1] << " / " << nomePlayer[2] << endl << endl;
            system("pause");
            exit(0);

        }

/*      cout << nomePlayer[0] << nomePlayer2[0] << endl;
        cout << escolhaPok[0] << escolhaPok_Usu2[0] << endl;
        cout << escolhaPok[1] << escolhaPok_Usu2[1] << endl;

        cout << nomePlayer[1] << nomePlayer2[1] << endl;
        cout << escolhaPok1[0]<< escolhaPok_Usu2_1[0] << endl;
        cout << escolhaPok1[1]<< escolhaPok_Usu2_1[1] << endl;

        cout << nomePlayer[2]<< nomePlayer2[2] << endl;
        cout << escolhaPok2[0]<<escolhaPok_Usu2_2[0] << endl;
        cout << escolhaPok2[1]<<escolhaPok_Usu2_2[1] << endl;
*/


        if(escolhaPok[1] == 0 and escolhaPok1[1] == 0 and escolhaPok2[1] == 0){
            system("pause");
            system("cls");
            cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-PARABÉNS AO JOGADOR 2-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\nAQUI ESTAO OS DADOS DA PARTIDA\n";
            cout << "Rodadas: " << cont << endl;
            cout << "Pokemons: " << nomePlayer2[0] << " / " << nomePlayer2[1] << " / " << nomePlayer2[2] << endl << endl;;
            system("pause");
            exit(0);

        }

    }

    return 0;
}
