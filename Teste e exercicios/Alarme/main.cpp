#include <iostream>

using namespace std;
int hora(int *h1, int *h2) {
    int aux=0, dec=0;
    if(*h2 < *h1) {
        aux = *h1;
        while(aux != *h2) {
            if(aux == 24) {
                aux = 0;
            }else{
                aux+=1;
                dec+=1;
            }
        }
    }

    else if(*h2 == *h1) {
        aux = 24;
    }
    else {
        aux = *h2 - *h1;
    }
    return aux;
}
int main()
{
    int h1, h2, m1, m2;
    int aux = 0, dec = 0;

    cin >> h1 >> m1 >> h2 >> m2;
    cout << h1 << "  " << m1 << endl;
    cout << h2 << " " << m2 << endl;

    aux = hora(&h1, &h2);

    cout << aux << endl;
    cout << dec << endl;
    return 0;
}

/*
 ANOTAÇÕES
 h1 = 2
 h2 = 1

 2 - 4
 4 - 2

*/
