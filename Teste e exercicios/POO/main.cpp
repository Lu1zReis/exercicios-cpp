#include <iostream>

using namespace std;

class C{
public:
    C(char *s = "", int i = 0, double d = 1){ // Essa fun��o servira como um objeto, para ser usado depois
        dadosMembro1[20] = *s;
        dadosMembro2 = i;
        dadosMembro3 = d;
    }
    void funcaoMembro1(){ // Essa fun��o � um dos parametros que podemos passar junto com o objeto

        cout << dadosMembro1 << " " << dadosMembro2 << " " << dadosMembro3 << endl;
    }
    void funcaoMembro2(int i, char *s = "desconhecido"){ // Uma outra fun��o que podemos usar de exemplo

        dadosMembro2 = i;
        cout << i << " recebido de " << s << endl;
    }
protected: // s� ser� visivel para essa classe

    char dadosMembro1[20];
    int dadosMembro2;
    double dadosMembro3;
};
C objeto1("objeto1", 100, 2000), objeto2("objeto2"), objeto3; // aqui definimos os dados que v�o estar dentro do obejto
int main()
{
    // Aqui abaixo ligamos o objeto com os dados a fun��o:
    objeto1.funcaoMembro1();
    objeto1.funcaoMembro2(123, "objeto1");
    return 0;
}
