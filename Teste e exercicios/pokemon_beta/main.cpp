#include <iostream>

using namespace std;

struct Pokemon {
string nome;
int ataque;
int defesa;
};

int main()
{
    // pikachu 1
    Pokemon Pikachu;
    Pikachu.nome = "Pikachu";
    Pikachu.ataque = 1200;
    Pikachu.defesa = 3000;

    // Chamander 2
    Pokemon Chamander;
    Chamander.nome = "Chamander";
    Chamander.ataque = 500;
    Chamander.defesa = 2500;


    return 0;
}
