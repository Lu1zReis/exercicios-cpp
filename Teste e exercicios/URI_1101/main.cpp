#include <iostream>

using namespace std;

void solve(int *a, int *b) {
    int m = *a, n = *b;
    if(m != 0 and n != 0) {
        int sum =0;
        for(int i = n; i <= m; i++) {
            sum += i;
            cout << i << " ";
        }
        cout << "Sum=" << sum << endl;
    }
}

int main()
{
    int a, b, maior, menor;
    while(a != 0 and b != 0) {

        cin >> a >> b;
        if(a > b){
            maior = a;
            menor = b;
        }
        else{
            maior = b;
            menor = a;
        }
        solve(&maior, &menor);
    }
    return 0;
}
