#include <iostream>

using namespace std;

int main()
{

float a[7];
int aux = 0;

for(int i = 0; i < 6; i++){
    cin >> a[i];
    if(a[i] > 0){
        aux+=1;
          }
      }

cout << aux << " valores positivos" << endl;
    return 0;
}
