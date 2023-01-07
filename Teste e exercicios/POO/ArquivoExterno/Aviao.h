#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED
using namespace std;

// aqui usamos o arquivo externo e trabalhamos com um construtor

class Aviao{
    public:
        int vel = 0;
        int velMax;
        string tipo;
        Aviao(int tp);
        void imprimir();
    private:

};

Aviao::Aviao(int tp) {

    if(tp == 1) {
        velMax = 800;
        tipo = "Jato";
    } else if(tp == 2) {
        velMax = 500;
        tipo = "Mono-motor";
    } else {
        velMax = 150;
        tipo = "Aeroplanador";
    }

}

void Aviao::imprimir() {

    cout << this->tipo << ": " << this->velMax << endl;

}

#endif // AVIAO_H_INCLUDED
