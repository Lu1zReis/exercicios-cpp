#include <iostream>
#include <iomanip>

using namespace std;

int main() {
cout.precision(4);
float a = 7;
float X, Y;
cin >> X;
Y = X * 2;

cout << fixed << Y << endl;
cout << fixed << a;

    return 0;
}
