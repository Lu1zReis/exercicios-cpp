#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<string> nomes = {"Luiz", "Rafa", "Derecka"};
    vector<string>::iterator it = nomes.begin();

    // avancando para apagar
    advance(it, 2);
    nomes.erase(it);

    for(vector<string>::iterator i = nomes.begin(); i != nomes.end(); i++) {
        if(*i == "Derecka") {
            cout << "Oi" << endl;
        } else {
            cout << *i << endl;
        }
    }

    return 0;

}
