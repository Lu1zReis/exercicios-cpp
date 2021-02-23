#include <iostream>

using namespace std;

int main()
{
    char a[2];

    cout << "Hello world!" << endl;
    cin >> a[0];
    cin >> a[1];
    if(a[0] =='o' and a[1]=='i'){
        cout << "okay" << endl;
   } else if(a[0]=='a' and a[1]=='i'){
        cout << "nao" << endl;
    }else{
    cout << "hummmm" << endl;
    }
    return 0;
}
