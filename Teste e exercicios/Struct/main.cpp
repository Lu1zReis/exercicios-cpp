#include <iostream>

using namespace std;

    struct pessoa{

        string nome;
        int idade;
        int cpf;
    };

int main()
{
    pessoa p;

    cout << "digite os dados: " << endl;
    cout << "CPF ->";
    cin >> p.cpf;
    cout << "Idade ->";
    cin >> p.idade;
    cout << "Nome ->";
    cin >> p.nome;

    cout << p.cpf << endl << p.idade << endl << p.nome;

    return 0;
}
