#include <iostream>
#include <time.h>


using namespace std;

int main()
{
    char Data[10];//aqui é a parte da data
    _strdate(Data);//aqui é tipo aonde a parte que incluimos aquela biblioteca, e estamos mostrando quem vai pegar essa biblioteca

    cout << "Ola mundo, hoje eh" << endl;
    cout << Data << endl;

    char timeStr[10];
    _strtime(timeStr);
    cout << "O horario eh"<<endl;
    cout << timeStr << endl;


    return 0;
}
