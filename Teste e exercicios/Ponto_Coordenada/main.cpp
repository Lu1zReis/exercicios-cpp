#include <iostream>

using namespace std;

int main()
{

    float x, y;

    cin >> x;
    cin >> y;

    if(x == 0.0 and y == 0.0){
        cout << "Origem" << endl;
    }

    else if(x == 0){
        cout << "Eixo Y" << endl;
    }

    else if(y == 0){
        cout << "Eixo X" << endl;
    }

    if(x > 0 and y > 0){
        cout << "Q1" << endl;
    }

    if(x > 0 and y < 0){
        cout << "Q4" << endl;
    }

    if(x < 0 and y > 0){
        cout << "Q2" << endl;
    }

    if(x < 0 and y < 0){
        cout << "Q3" << endl;
    }


    return 0;
}
