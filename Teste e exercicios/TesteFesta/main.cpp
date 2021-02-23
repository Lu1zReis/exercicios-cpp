#include <iostream>

using namespace std;

int main()
{
    int festa=0;
    cout << "Tipo de festa, 1)reuniao de familia / 2)festa de familia" << endl;
    cin >> festa;
    switch (festa){
case 1:{
    int x=17;
    cout << "Festa definido para reuniao de familia"<<endl;
    cout << "Sao pessoas proximas?\n1)SIM\n2)NAO\n";
    int a;
    cin >> a;
    if(a==1){a=a+6;}
    if(a==2){a=a+4;}

    cout << "Havera muitas pessoas na festa?\n1)SIM\n2)NAO\n";
    int b;
    cin >> b;
    if(b==1){b=b+11;}
    if(b==2){b=b+5;}

    cout << "Tera pelo menos uma pessoa para conversar\n1)SIM\n2)NAO\n3)TALVEZ\n";
    int c;
    cin >> c;
    if(c==1){c=c+14;}
    if(c==2){c=c-2;}
    if(c==3){c=c+4;}

    cout << "A festa vai ser\n1)DE MANHA\n2)DE TARDE\n3)DE NOITE\n";
    int d;
    cin >> d;
    if(d==1){d=d+3;
    cout << "Voce vai almocar?\n1)SIM\n2)NAO\n";
    int f;
    cin >> f;
    if (f==1){f+=2;}
    if (f==2){f+=5;}
    d=d+f;
    }

    if(d==2){d=d+2;}

    if(d==3){d=d+4;
    cout << "Voce vai jantar?\n1)SIM\n2)NAO\n";
    int g;
    cin >> g;
    if (g==1){g=3;}
    if (g==2){g=1;}
    d=g+d;

    }

    cout << "Coloque uma variavel de 1 a 10%\n";
    int our;
    cin >> our;
    int sum;

    sum=x+a+b+c+d+our;
    cout <<endl<<sum<<"% de prbabilidade de talvez ser legal"<<endl;
    if (sum>=75){
        cout << "As chances de ser algo dentro de uma reuniao aceitavel esta bem boa, mas pode existir variaveis, ateh erro\n";
    }else if(sum>=51){
    cout << "Mesmo que seja maior que 50% as chances de serem piores do que melhores eh bem alta\n";
    }else{
    cout << "Aconselho a nao ir, mesmo que este teste nao seja 100% confiavel, ainda assim talvez nao seja a melhor escolha\n";
    }

    break;}

case 2:{
       int x=23;
    cout << "Tipo de festa definida para 'Festa de Familia'\n";
    cout << "Vai ser na casa de uma pessoa proxima\n1)SIM\n2)NAO\n3)SO SO\n";
    int a;
    cin >> a;

    if(a==1){a=a+9;}
    if(a==2){a=a+2;}
    if(a==3){a=a+4;}

    cout << "Em qual periodo do dia?\n1)DE MANHA\n2)DE TARDE\n3)DE NOITE\n ";
    int b;
    cin >> b;

    if(b==1){b=b+9;}
    if(b==2){b=b+5;}
    if(b==3){b=b+12;}

    cout << "Vai ter bastante pessoa conhecida na festa para conversa?\n1)SIM\n2)NAO\n3)TALVEZ\n";
    int c;
    cin >> c;

    if(c==1){c=c+14;}
    if(c==2){c=c+2;}
    if(c==3){a=c+3;}

    cout << "Voce tera que ir a pe?\n1)SIM\n2)NAO\n";
    int d;
    cin >> d;

    if(d==1){d=d+4;}
    if(d==2){d=d+0;}

    cout << "Essa festa sera\n1)SO POR REUNIAO(SOH QUE MAIS VOLTADO PARA UMA FESTA)\n2)ANIVERSARIO\n3)CHURRASCO\n";
    int e;
    cin >> e;

    if(e==1){e=e+7;}
    if(e==2){e=e+18;
    cout<<"Vai ter bolo?\n1)SIM\n2)NAO\n";
    int f;
    cin >> f;
    if(f==1){f=3;}
    if(f==2){f=1;}
    e=e+f;
    }
    if(e==3){e=e+12;}

    int sum;
    sum = x+a+b+c+d+e;

    cout << sum << "% de prbabilidade de talvez ser legal\n";
    if (sum>=75){
        cout << "Aconselho a ir, pois  eh uma festa de familia, e as chances de serem boas eh bem grande\n";
    } else if (sum>=55){
    cout << "talvez nao seja tao boa assim... Mas agora vai depender de voce, pode existir uma variavel nesse resultado\n";
    }else {
    cout << "Diferentemente da opcao 1, esse tipo de festa provavelmente e logicamente ainda assim seria melhor do que ela\nPois ela esta perto ou em torno de 10% melhor que a opcao 1, mas ainda assim pode ser ruim\n";
    }


    break;}
    }

    return 0;
}
