#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    double planilha[5][6] = {}, total=0;

    for(int x = 0; x < 5; x++) {
        for(int y = 0; y < 5; y++) {
            planilha[x][y] = (double)rand() / (RAND_MAX);
        }
    }

    for(int x = 0; x < 5; x++) {
        for(int y = 0; y < 5; y++) {
            planilha[x][5] += planilha[x][y] ;
        }
        total += planilha[x][5];
    }

    for(int x = 0; x < 5; x++) {
        for(int y = 0; y < 6; y++) {
            string fim = (y<4) ? ", " : (y==4) ? " = " : "\n";
            cout << "[" << x << "]" << "[" << y << "]" << planilha[x][y] << fim;
        }
    }

    cout << "O valor das somas eh: " << total << endl;

    return 0;
}
