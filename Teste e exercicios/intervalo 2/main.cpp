#include <iostream>

using namespace std;

int main()
{
    int x = 0, in = 0, out = 0;
    cin >> x;
    int n[x];

    for(int i = 0; i < x; i++){
        cin >> n[i];
        if(n[i] >= 10 and n[i] <= 20)
            in += 1;
        else
            out += 1;
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}
