#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout.precision(4);

    double X1, Y1, p1;
    double X2, Y2, p2;
    double distancia;

    cin >> X1;
    cin >> Y1;
    cin >> X2;
    cin >> Y2;

    p1 = X2 - X1;
    p2 = Y2 - Y1;


    distancia = sqrt(pow(p1, 2) + pow(p2, 2));

    cout << fixed << distancia << endl;

    return 0;
}
