#include <iostream>

using namespace std;

int main()
{

    int n = 1;
    for(int i = 1; i <= 90; i++){
        cout << "a" << i << " -> " << "-263+3*" << n << " = "  << -263+(3*n) << endl;

        n++;
    }
    cout << "\n\n\n";
    n = 1;
    for(int j = 1; j <= 90; j++){
        cout << "b" << j << " -> " << "290-4*" << n << " = "  << 290-(4*n) << endl;

        n++;
    }

    return 0;
}
