#include <iostream>

using namespace std;

class D{
public:

    D(int i, float j, char *r = "Desconhecido"){
        valor1 = i;
        valor2 = j;
        valor3 = *r;
    }

    void funcaoD(){
        valor2 = valor1 * valor2;
        cout << "Os dados foram passados por: " << valor3 << " - " << valor2 << endl;
    }

    void funcaoD2(char *r = "Desconhecido", int i = 0){
        cout << "Foi passado por - " << r << endl;
        cout << "O valor - " << i << endl;
    }

private:
    int valor1;
    float valor2;
    char valor3;
};
D objeto1(2, 2.5, "Luiz");
int main()
{
    objeto1.funcaoD();
    objeto1.funcaoD2("Luiz", 100);
    return 0;
}
