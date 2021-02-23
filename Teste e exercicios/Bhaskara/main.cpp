#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    cout.precision(5);

    double a = 0, b = 0, c = 0, aux = 0;
    double x1, x2, delta;

    cin >> a;
    cin >> b;
    cin >> c;


    aux = pow(b, 2);
    delta = aux - (4 * a * c);

        if(delta > 0){
            x1 = ((-(b)) + sqrt(delta)) / (2 * a);
            x2 = ((-(b)) - sqrt(delta)) / (2 * a);


            cout << fixed << "R1 = " << x1 << endl;
            cout << fixed << "R2 = " << x2 << endl;
        }
        else{
            cout << "Impossivel calcular" << endl;
        }




    return 0;
}
