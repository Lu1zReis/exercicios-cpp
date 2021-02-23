#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void b(){
//Variaveis
    char p1;

     cout << "Voce vai responder uma pergunta\n" << endl;
     cout << "Responda a essa pergunta para ganhar:\n QUAIS DESSAS ALTERNATIVAS SAO VERDADEIRAS?\n";
     cout << "A) Existem macacos no Japao que usam moedas para comprar petiscos em maquinas de conveniencia\n";
     cout << "B) Nos ( seres humanos ) atualmente somos a especie viva mais velha do planeta\n";
     cout << "C) O ser humano e o topo da cadeia alimentar\n";
     cout << "D) A mais agua presente na Lua do que em Marte\n";


     cin >> p1;
            switch (p1){
        case 'a':
            cout << "CERTA RESPOSTA!!\n no Japao existem esses macaquinhos que usam sua inteligencia para comprar produtos!\n";
        break;

        case 'b':
            cout << "RESPOSTA INCORRETA!!\n O ser humano nao chega nem a ser uma das especeies mais velhas da terra\nA especie mais velha do planeta eh, o Molusco Arctica Islandica - 507 anos\n";
        break;

        case 'c':
            cout << "RESPOSTA ERRADA!!\n  O ser humano esta do lado do porco e da anchova na cadeia alimentar com a classificacao de 2.2\nEnquanto por exemplo o urso tem 5.5\n";
        break;

        case 'd':
            cout << "RESPOSTA INCORRETA!!\n Em marte existe mais agua do que na lua, ate por isso eh um dos planetas mais cojetados para se viver hoje em dia\n";
        break;

        default:
            cout << "resposta invalida" <<endl;

            }

}

void a(){
//Variaveis
    int ult, num1;

        cout << "Voce vai enfrentar uma conta\n"<<endl;
        cout << "faca uma conta para ganhar, se voce tiver 4000+1-(1x1)/4"<<endl;
        cin >> num1;

        if(num1 == 4000){
        cout << " voce ganhou!!" << endl;}

    else{
            cout<<"Voce perdeu, vai ter outra chance\n"<<endl<<"ESCOLHA UM NUMERO NO TECLADO\n";
            cin >> ult;
        if (ult==0){
            cout << "parabens, voce acertou!"<<endl;
        }
        else{
        cout << "voce errou!"<<endl;}
    }

}

void menu(){

    //Variaveis
    int op;

    do{
        char escolha;

        cout << "Voce quer entrar na porta A) ou B)" << endl;
        cin >> escolha;

        if (escolha == 'a'){

                a();

        }

        else if (escolha == 'b'){

                b();

        }

        else {

            cout << "Desculpe, so sera valido se for 'a' ou 'b'\nDeseja continuar? Se sim digite 1: ";
            cin >> op;
            system("pause");
            system("cls");
                            }

    }while(op == 1);

}

int main()
{

    menu();

    return 0;
}
