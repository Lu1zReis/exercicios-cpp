#include <iostream>

using namespace std;

int main()
{
    cout << "Aqui irei mostrar os semestres da E.C de cada instituicao\n" << endl;
    cout << "escolha o semestre do 1 ao 10\n";
int a;
cin >> a;
   while(a<=10){
    switch(a){
case 1:
    cout << "1 SEMESTRE\n";
    cout << "E.C_UFMT        E.C_IFMT\n\n";

    cout << "Cálculo I        XXXXXXXX\n";
    cout << "Fisica I        XXXXXXXX\n";
    cout << "Algoritmos e Programacao de PC's        XXXXXXXX\n";
    cout << "Expressao grafica...        XXXXXXXX\n";
    cout << "Sociedade...        XXXXXXXX\n";
    cout << "Comunicacao,Expressao e redacao        XXXXXXXX\n";
    cout << "Inovacao e tecnologia        XXXXXXXX\n";


    break;
case 2:
    cout << "2 SEMESTRE\n";
    cout << "E.C_UFMT                                 E.C_IFMT\n\n";

    cout << "Calculo II                               XXXXXXX\n";
    cout << "Fisica II                                XXXXXXX\n";
    cout << "Quimica Geral                            XXXXXXX\n";
    cout << "Algebra Linear e Geometria analitica     XXXXXXX\n";
    cout << "Probabilidade e estatistica              XXXXXXX\n";
    cout << "Oficina de opening science               XXXXXXX\n";

    break;
case 3:
    cout << "3 SEMESTRE\n";
    cout << "E.C_UFMT                                 E.C_IFMT\n\n";

    cout << "Calculo III                               XXXXXXX\n";
    cout << "Fisica III                               XXXXXXX\n";
    cout << "Estrutura de dados                               XXXXXXX\n";
    cout << "Circuitos Eletricos                               XXXXXXX\n";
    cout << "Eletronica Analogia e Digital                              XXXXXXX\n";
    cout << "Fundamentos de Eng[...] Economica                               XXXXXXX\n";

    break;
case 4:
    cout << "4 SEMESTRE\n";
    cout << "E.C_UFMT                                 E.C_IFMT\n\n";

  cout << "Calculo IV" << endl;
  cout << "Fundamentos Matemáticos para Computação" << endl;
  cout << "Banco de Dados" << endl;
  cout << "Micocontroladores e Sistemas Digitais" << endl;
  cout << "Programação orientada a Objetos " << endl;
  cout << "Fundamentos de Fenômenos de transporte " << endl;
  cout << "Fundamentos da Fisica do Estado S. " << endl;

    break;
case 5:
    cout << "5 SEMESTRE\n";
    cout << "E.C_UFMT                                 E.C_IFMT\n\n";

    cout << "Projeto e Análise de Algoritmos\n";
    cout << "Inteligência Artificial\n";
    cout << "Computação Gráfica\n";
    cout << "Redes de Computadores\n";
    cout << "L. de Micocontroladores e S. Digitais\n";
    cout << "L. Laboratorio de Banco de Dados\n";
    cout << "Mecanica dos Solos\n";
    cout << "Optativa I\n";

    break;
case 6:
    cout << "6 SEMESTRE\n";
    cout << "E.C_UFMT                                 E.C_IFMT\n\n";

    cout << "Proj. e Desenvolvimento de Software\n";
    cout << "Teor. das Linguagens formais e Automatos\n";
    cout << "Analise e Processamento de Sinais\n";
    cout << "Sistemas Operacionais\n";
    cout << "Arquiteura de Computadores\n";
    cout << "Laboratorio de Redes de Computadores\n";
    cout << "Administracao para Engenheiros\n";

    break;

    }cin >> a;}


    return 0;
}
