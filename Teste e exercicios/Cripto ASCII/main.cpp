#include <iostream>
#include <string.h>
using namespace std;

char Vet[3] = {'a','b', 'c'};

int main()
{
    int j=0;
    for(int c=0; c<4; c++){
        cout << Vet[c] << " Pos = " << c << endl;
        j++;
        cout << j << endl;
        if(c == strlen(Vet)) {
            cout << "ENTROU";
            for(int anda = 0; anda < (j-1); anda++) {
                cout << Vet[anda] << " Pos = " << anda << endl;
            }
            break;
        }
    }
    return 0;
}
