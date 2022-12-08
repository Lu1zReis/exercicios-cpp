#include <iostream>
#include <stdio.h>
#define N 3 // constante

using namespace std;

struct ficha_aluno {
    int matricula;
    float nota[3];
    float media = 0;
    string nome;
};

struct ficha_aluno aluno[N];

void buscaAluno() {
    int pos=-1, matr;
    cout << "procure o aluno pela sua matricula: ";
    cin >> matr;
    for(int = 0; i < N; i++) {
        if(matr == aluno[i].matricula) {
            pos = i;
        }
    }
    if(pos < 0) {
        cout << "nao existe essa matricula\n";
    } else {

    }

}

int main()
{

    float media=0;
    int quant;

    // lendo os dados
    for(int i = 0; i < N; i++) {
        cout << "=-=-=-=" << i+1 <<"o ALUNO=-=-=-=" << endl;
        cout << "matricula: ";
        cin >> aluno[i].matricula;
        cout << "nome: ";
        cin >> aluno[i].nome;

        for(int n = 0; n < 3; n++) {
            cout << n+1 <<"a nota: ";
            cin >> aluno[i].nota[n];
            aluno[i].media += aluno[i].nota[n];
        }
        aluno[i].media /= 3;
        cout << "MEDIA: " << aluno[i].media << endl;

        // media da turma
        media += aluno[i].media;
    }

    media /= N;

    while(true) {
        int esc;
        cout << "\n===================================================\n";
        cout << "O que deseja fazer com esses valores?" << endl;
        cout << "1) Ver a media da sala\n";
        cout << "2) Buscar um aluno\n";
        cout << "3) Ver lista de alunos (maior ao menor na media)\n";
        cout << "4) Sair\n:";
        cin >> esc;

        switch(esc) {
            case 1:
                cout << media << endl;
            break;
            case 2:
                //buscaAluno(aluno);
            break;
            case 3:
                //ordenarAlunos(aluno);
            break;
            case 4:
                return 0;
            break;
            default:
                cout << "Escolha um valor correto\n";

        }

    }

    return 0;
}
