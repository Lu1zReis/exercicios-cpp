#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

using namespace std;

int main()
{
    cout << "Informe o usuario\n";
    char usu[5];
    cin >> usu;

    cout << "Bem vindo " << usu << " ao AssistenteX" << endl;
    cout << "Informe o horario\n";
    double day;
    cin >> day;
    cout << "informe a temperatura\n";
    int temp;
    cin >> temp;
    if(day>=5 and day<=12){
            cout << "Bom Dia\nisso quer dizer que voce tem um bom tempo para fazer bastante coisas" << endl;
            cout << "Recomendo se o tempo estiver nublado que voce faca algo la fora" << endl;
            if (temp >= 30){cout << "Com essa temperatura tem tudo para aumentar\nSe hidrate,e recomendo uma dessas opcoes\n";
                cout << "A)Assista um filme\nB)Jogue um jogo\nC)Algo que voce ache melhor\n";
                char a;
                cin >> a;
                if (a=='a'){
                    cout << "okay " << usu << " procure as novidades na Netflix ";
                }if(a=='b'){
                cout << "O dia esta quente, mas esta cedo ainda, então recomendo mexer no PC ou o Notebook, e jogar algo que esteja com vontade\n";
                }if(a=='c'){
                cout << "Bom, tem como estudar agora, mas não precisa estudar tudo nesse momento, ainda tem a parte da noite\n";
                }
            }if(temp<=29){
            cout << "o dia esta um pouco mais fresco, entao recomendo ouvir musica e ateh mesmo praticar algum esporte la fora\n se o tempo estiver um pouco mais fechado\n";
            }

    }

    if(day>=13 and day<=18){
    cout << "Boa tarde " << usu << endl;
    if(day>=16){cout<<"estamos quase no fim da tarde"<<endl;
    cout << "Recomendo fazer uma dessas opcoes\n1)JOGAR BOLA\n2)TREINAR BASQUETE\n3)FAZER OUTRA COISA\n";
    int esco;
    cin >> esco;
    if(esco==1){cout<<"tenha uma boa partida\n";}
    if(esco==2){cout<<"okay, mas recomendo que tenha pelo menos uma cesta, ou uma bola cheia\n";}
    if(esco==3){cout<<"o que deseja fazer?\n";
    char alea[5];
    cin >> alea;
    cout << "okay entao, va "<< alea <<" "<< usu << endl;
    }
    }

if(day<=15){cout<<"estamos no comeco da tarde"<<endl;
if( temp >=30){
    cout << "esta bem quente"<<endl;
    cout << "Recomendo se hidratar e se refrescar com um banho ou algo que ajude o seu corpo\n";
}
if(temp <=29){cout<<"esta fresco"<<endl;}
cout << "o que voce deseja fazer?\n";
cout << "1)OUTRA COISA\n2)ESTUDAR\n3)JOGOS PRE DEFINIDOS\n";
int i;
cin >> i;
if(i==1){cout<<"o que deseja fazer?\n";
char w[6];
cin >> w;
cout << "okay, vai la "<< w <<" "<< usu << endl;
}
if(i==2){cout<<"Okay, vai estudar para ganhar mais conhecimento\n";
}

if(i==3){cout << "preparando o jogo...\n";
 char a='a';
    char b='b';

    cout << "Voce quer entrar na porta A) ou B)" << endl;
    cin >> a, b;

    if (a=='a'){
    cout << "Voce vai enfrentar uma conta\n"<<endl;
    cout << "faca uma conta para ganhar, se voce tiver 4000+1-(1x1)/4"<<endl;
    int num1;
    cin >> num1;
    if(num1 == 4000){
    cout << " voce ganhou!!" << endl;}
    else{
        cout<<"Voce perdeu, vai ter outra chance\n"<<endl<<"ESCOLHA UM NUMERO NO TECLADO\n";
        int ult;
        cin >> ult;
        if (ult==0){
            cout << "parabens, voce acertou!"<<endl;
        }else{
        cout << "voce errou!"<<endl;}
    }
    }

    else if (b=='b'){
        char p1;

     cout << "Voce vai responder uma pergunta\n"<<endl;
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
   } else {
   cout << "Desculpe, so sera valido se for 'a' ou 'b'"<<endl;
   }
}
}
    }

    else if(day>=19 and day<=23){
    cout <<"ja eh "<< day << " entaoh boa noite"<<endl;
    cout << "ja estudou algo hoje " << usu <<"?"<< endl;
    char ya[3];
    cin >> ya[0];
    cin >> ya[1];
    cin >> ya[2];
    if(ya[0]=='s' and ya[1]=='i'and ya[2]=='m'){
        cout << "okay, muito bem\n";
        cout << "se voce achar que ja eh o suficiente descanse\n";

        }

        else if(ya[0]=='n' and ya[1]=='a' and ya[2]=='o'){cout << "recomendo estudar\n";
    cout << "a menos que voce nao esteja em condicoes ou esteja fazendo algo mais importante\n";
    }
    }
cout << "o que quer fazer agora?\nColoque alguma palavra chave\n";
char ult[8];
cin >> ult[0];
cin >> ult[1];
cin >> ult[2];
cin >> ult[3];
cin >> ult[4];
cin >> ult[5];
cin >> ult[6];
cin >> ult[7];
if(ult[0]=='e' and ult[1]=='n' and ult[2]=='c' and ult[3]=='e' and ult[4]=='r' and ult[5]=='r' and ult[6]=='a' and ult[7]=='r'){
    cout << "Okay fechando...\n";
}if(ult[0]=='a' and ult[1]=='b' and ult[2]=='r' and ult[3]=='i' and ult[4]=='j' and ult[5]=='o' and ult[6]=='g' and ult[7]=='o'
|| ult[0]=='a' and ult[1]=='n' and ult[2]=='i' and ult[3]=='m' and ult[4]=='a' and ult[5]=='r' and ult[6]=='s' and ult[7]=='e'){
cout << "Abrindo jogo\n" << endl;
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
}
if(ult[0]=='e' and ult[1]=='x' and ult[2]=='e' and ult[3]=='c' and ult[4]=='u' and ult[5]=='t' and ult[6]=='a' and ult[7]=='r'
||ult[0]=='p' and ult[1]=='r' and ult[2]=='o' and ult[3]=='g' and ult[4]=='r' and ult[5]=='a' and ult[6]=='m' and ult[7]=='a'){
    cout << "deseja abrir ou executar alguns desses programas?\n";
    cout << "1)Bloco de notas          2)Ragnarok Online 2\n";
    cout << "3)Iron Sight              4)Yet Another Zumbies\n5)Google Chrome\n";

    int executar;
    cin >> executar;

    switch(executar){
case 1:
    system("Start notepad");
    break;
case 2:
    system("Start steam://rungameid/231060");
    break;
case 3:
    system("Start steam://rungameid/715220");
    break;
case 4:
    system("Start steam://rungameid/270550");
    break;
case 5:
    system("Start Chrome");
    break;
default:
    cout << "desculpe, resposta invalida\n";
    }

   }
system("pause");
    return 0;
}
