#include <iostream>

using namespace std;

int main()
{
    char a;
    char b;
    char c;
    char d;

    cout << "Hello world!" << endl;

    cout << "Vamos fazer algumas perguntas para testar o programa C++\n";
    cout << "Aqui estao algumas perguntas\n";
    cout << "A) Bla bla bla\nB) Bla Bla Bla\nC)Tal tal tal \nOu\nD)Isso e aquilo";
    cin>> a, b, c, d;
    if(a=='a'){
        cout<< "Certa resposta";}
        else{
            if(b==b)cout<<"Resposta errada, nao eh essa";
            if(c==c)cout<<"naooo\n";
            if (d==d)cout<<"ops\n";
        }
    return 0;
}
