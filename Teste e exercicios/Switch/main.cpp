#include <iostream>

using namespace std;

int main()
{
    int morning;

    cout << "Por favor, informe o horario!" << endl;
    cin >> morning;

    switch(morning){
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        cout << "Isso significa que ainda estamos no comeco do dia\nTenha um bom dia"<< endl;

        break;
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
        cout << "Tenha um bom resto de tarde"<<endl;

        break;
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 00:
        cout << "Tenha uma boa noite"<< endl;

        break;
    default:
        cout << "eh madrugada, va dormir" << endl;


    }
    return 0;
}
