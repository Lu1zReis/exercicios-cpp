#include <iostream>

using namespace std;

void parte1(int a){
    cout << "Digite um número: ";
    cin >> a;
    cout << "\nO numero digitado foi: " << a << endl << endl;

}
void parte2(int b){
    cout << "Digite um número: ";
    cin >> b;
    cout << "\nO segundo numero digitado foi: " << b << endl;
}

int main()
{
    int a;
    parte1(a);

    int b;
    parte2(b);


    return 0;
}
