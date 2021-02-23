#include <iostream>

using namespace std;

template<class genTipo> // essa � classe � uma classe gen�rica, gra�as ao template
class genClasse{
public:
    genTipo estocagem[50];
};

genClasse<int> intObjeto;
genClasse<float> floatObjeto;

int main()
{

floatObjeto.estocagem[0] = 50;
intObjeto.estocagem[0] = 100;
cout << "Estocagem <float> " << floatObjeto.estocagem[0] << endl;
cout << "Estocagem <int> " << intObjeto.estocagem[0] << endl;

    return 0;
}
