#include <iostream>

using namespace std;

int main()
{
    cout.precision(1);

    float n1, n2, n3, n4, media, exame;

// Leitura de entrada de dados
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

// Cálculo
    n1 *= 0.20;
    n2 *= 0.30;
    n3 *= 0.40;
    n4 *= 0.10;
    media = n1 + n2 + n3 + n4;

// 1 - Exibir
    cout << fixed << "Media: " << media << endl;

// 1.1 Resultados
    if(media >= 7){

        cout << fixed << "Aluno aprovado." << endl;

    }
    if(media < 5){

        cout << fixed << "Aluno reprovado." << endl;

    }
    if(media >= 5 and media <= 6.9){

        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout << fixed << "Nota do exame: " << exame << endl;

        exame = (exame + media) / 2;

        if(exame >= 5){
            cout << "Aluno aprovado." << endl;
            cout << fixed << "Media final: " << exame << endl;
        }else{

            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << exame << endl;

        }

    }

    return 0;
}
