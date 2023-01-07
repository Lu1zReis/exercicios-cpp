#include <iostream>

using namespace std;

class Aviao {
    public:
        int vel = 0;
        int velMax; // não declaramos a velocidade, porque usaremos um construtor para definir sua vel de acordo com o avião
        string tipo;

        void ini(int tp); // quando criamos uma função, dentro da classe ela só será uma função

    private:

};

void Aviao::ini(int tp) // aqui construimos a função, fora da classe
{
    if(tp == 1) {
        velMax = 800;
        tipo = "Jato";

    } else if(tp == 2) {
        velMax = 350;
        tipo = "Monomotor";

    } else {
        velMax = 180;
        tipo = "Planador";
    }
}

int main()
{
    Aviao *av1 = new Aviao(); // instanciamos um novo objeto da classe avião
    Aviao *av2 = new Aviao();

    // cout << av1->vel << endl;

    av1->ini(2); // colocamos o tipo
    cout << av1->tipo << ": " << av1->velMax << endl;

    av2->ini(1); // colocamos o tipo
    cout << av2->tipo << ": " << av2->velMax << endl;

    return 0;
}
