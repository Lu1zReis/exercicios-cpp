
#include <iostream>

using namespace std;

int main()
{
    char A='a';
    char B='b';

    cout << "Bem vindo ao jogo de escolha" << endl;
    cout << "Escolha Uma porta\n A)\n B)"<< endl;
    cin >> A,B;

    if (A=='a'){
        cout << "voce escolheu a escolha 'A'"<<endl;
        cout << "\nVoce tem que fugir de um assassino"<<endl;
        cout << "Escolha uma forma de escapar\n";

        int num1;

        cout << " 1)Corra desesperadamente\n 2)Saia andando para nao fazer barulho"<< endl;
        cin >>num1;

        if(num1==1){
            cout << "ma escolha, ele ira te pegar"<<endl;
            int saver;
            cout << "escolha um numero aleatorio da tecla de '1' a '9' do teclado para se salvar!\n Do total de 100%, a chance de acertar o numero eh so 10%\n entao escolha bem\n";
            cin >> saver;
            if (saver==7){
                cout << "\n PARABENS, VOCE SE SALVOU"<< endl;
            }else{
            cout<< "voce morreuu"<<endl;
            }
        } else {
        cout << "Boa escolha, voce sobreviveu"<<endl;
        }


    }else{
    cout << "voce escolheu a escolha B\n"<< endl;
    cout << "Voce esta na final da Copa do Mundo, e vai bater um penalti"<<endl;

    int chute;
    cout << "Voce tem a chance de bater esse penalti, e soh um lado sai o gol, e os outros dois voce erra, mas vai ter mais uma ultima chance, mesmo se errar"<<endl;
    cout << "Escolha um canto \n1)Chute na direita\n2)chute no meio\n3)chute na esquerda"<<endl;

    cin >> chute;
    if (chute==3){
        cout << "GOOOOLL, parabens, voce foi campeao" << endl;
    }else if(chute==2){
    cout <<"voce errou\n";
    int ultimo;
    cout << "voce vai ter outra chance\nEscolha um numero,entre '0' a '9'"<<endl;
    cout << "A chance de acertar no total de 100%,eh so 10%, entao escolha bem\n";
    cin >> ultimo;
    if (ultimo==9){
        cout << "PARABENS, voce acertou o numero, e o gooool"<<endl;
    }else{
    cout<<"voce errou o numero, e perdeu a copa";}

    }else{
    cout<<"voce perdeu o penalti\n";}

}

    return 0;
}
