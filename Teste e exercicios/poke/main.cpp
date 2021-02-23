#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    /*<<<<PONTEIRO>>>>
    int valor;
    valor =10;

    int *pontValor;
    pontValor = &valor;

    cout << *pontValor << endl;
    */
int Pokemon [2]={10,80};
int Pokemon2[2]={20,67};
int Pokemon3[2]={35,70};
int Pokemon4[2]={40,50};
int Pokemon5[2]={30,60};
int Pokemon6[2]={5,80};

int escolher[3];
int pegar[6];
    cout << "Escolha seu Pokemon!" <<endl;
cout << "1)A\t2)B\t3)C\n4)D\t5)E\t6)F\n\n";
cin >> escolher[3];
while(escolher){
    switch(escolher[3]){
case 1:
   pegar[0] = Pokemon[0];
   pegar[1] = Pokemon[1];
   break;
case 2:
   pegar[2] = Pokemon2[0];
   pegar[3] = Pokemon2[1];
   break;
case 3:
   pegar[4] = Pokemon3[0];
   pegar[5] = Pokemon3[1];
break;
 }
   cout << pegar[6] << endl;
   system("pause");
   break;
}

    return 0;
}
