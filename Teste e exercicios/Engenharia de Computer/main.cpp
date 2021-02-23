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
    cout << "E.C_UFMT                                     E.C_IFMT\n\n";

    cout << "Calculo I                                  Calculo Diferencial\n";
    cout << "Fisica I                                   Vetores e Geometria Analitica\n";
    cout << "Algoritmos e Programacao de PC's           Fisica Geral e Experimental I\n";
    cout << "Expressao grafica/Desenho Tec              Algoritmos I\n";
    cout << "Sociedade, M.A, etica e Etc.               Comunicacao e ExpressaoI\n";
    cout << "Comunicacao,Expressao e redacao tecnica\n";
    cout << "Inovacao e tecnologia\n";


    break;
case 2:
    cout << "2 SEMESTRE\n";
    cout << "E.C_UFMT                                      E.C_IFMT\n\n";

    cout << "Calculo II                                  Calculo diferencial e Integral II\n";
    cout << "Fisica II                                   Algebra Linear\n";
    cout << "Quimica Geral                               Fisica Geral e Experimental II \n";
    cout << "Algebra Linear e Geometria analitica        Algoritmos II \n";
    cout << "Probabilidade e estatistica                 Quimica Geral e Ciencia dos Mate.\n";
    cout << "Oficina de opening science                  Probabilidade e estatistica \n";

    break;
case 3:
    cout << "3 SEMESTRE\n";
    cout << "E.C_UFMT                                      E.C_IFMT\n\n";

    cout << "Calculo III                                 Calculo diferencial e Integral III \n";
    cout << "Fisica III                                  Fisica Geral e Experimental III \n";
    cout << "Estrutura de dados                          Desenho Tecnico\n";
    cout << "Circuitos Eletricos                         Eletricidade aplicada \n";
    cout << "Eletronica Analogia e Digital               Mecanica Geral \n";
    cout << "Fundamentos de Eng[...] Economica           Estrutura de Dados I \n";

    break;
case 4:
    cout << "4 SEMESTRE\n";
    cout << "E.C_UFMT                                       E.C_IFMT\n\n";

  cout << "Calculo IV                                    Calculo diferencial e Integral IV  " << endl;
  cout << "Fundamentos Matemáticos para Computação       Calculo Numerico " << endl;
  cout << "Banco de Dados                                Matematica Discreta " << endl;
  cout << "Micocontroladores e Sistemas Digitais         Eletronica digital " << endl;
  cout << "Programação orientada a Objetos               Arquitetura e Org. De Comput.  " << endl;
  cout << "Fundamentos de Fenômenos de transporte        Estutura de dados II  " << endl;
  cout << "Fundamentos da Fisica do Estado S.            Metodologia Cientifica " << endl;

    break;
case 5:
    cout << "5 SEMESTRE\n";
    cout << "E.C_UFMT                                        E.C_IFMT\n\n";

    cout << "Projeto e Análise de Algoritmos             Sinais e Sistemas Lineares \n";
    cout << "Inteligência Artificial                     Sistemas Operacionais \n";
    cout << "Computação Gráfica                          Eletromagnetismo \n";
    cout << "Redes de Computadores                       Eletronica Analogica \n";
    cout << "L. de Micocontroladores e S. Digitais       Projeto Integrador I \n";
    cout << "L. Laboratorio de Banco de Dados            Linguagem de Programacao I\n";
    cout << "Mecanica dos Solos\n";
    cout << "Optativa I\n";

    break;
case 6:
    cout << "6 SEMESTRE\n";
    cout << "E.C_UFMT                                        E.C_IFMT\n\n";

    cout << "Proj. e Desenvolvimento de Software         Controle de Sist. Continuos I \n";
    cout << "Teor. das Linguagens formais e Automatos    Microprocessadores\n";
    cout << "Analise e Processamento de Sinais           Compiladores\n";
    cout << "Sistemas Operacionais                       Banco de Dados \n";
    cout << "Arquiteura de Computadores                  Principios de Comunicacao\n";
    cout << "Laboratorio de Redes de Computadores        Linguagem de Programacao II \n";
    cout << "Administracao para Engenheiros\n";

    break;
case 7:

    cout << "7 SEMESTRE\n";
    cout << "E.C_UFMT                                        E.C_IFMT\n\n";
    cout << "Sistema de controle I                       Micocontroladores \n"<<
            "Construcao de Compiladores                  Fenomenos de Transporte \n"<<
            "Sistemas Embarcados                         Linguagem de Programacao III \n"<<
            "Engenharia de Software I                    Comunicacao de Dados \n"<<
            "L. de Proj. e Desenvolvimento de Software   Projeto Intregador II \n"<<
            "L. de Arquitetura de Computadores\n"<<
            "Optativa II\n";

            break;
case 8:
    cout << "8 SEMESTRE\n";
    cout << "E.C_UFMT                                       E.C_IFMT\n\n";
    cout << "Automacao Industrial I                      Rede de Computadores I \n"<<
            "Robotica I                                  Inteligencia Artificial \n"<<
            "Construcao de Interfaces                    Legislacao e Etica Profissional \n"<<
            "Homem-Maquina                               Processamento Digital de Sinais \n"
            "Sistemas Distribuidos                       Seguranca do Trabalho \n"<<
            "Optativa III                                Sistemas Embarcados\n";

            break;
case 9:

    cout << "9 SEMESTRE\n";
    cout << "E.C_UFMT                                      E.C_IFMT\n\n";
    cout << "Teleinformatica                            Rede de Computadores II \n"<<
            "Robotica II                                Automacao e Sup de Processos \n"<<
            "Pesquisa Operacional e otimizacao          Processamento Digital de Imagens \n"<<
            "Optativa IV                                Estagio Supervisionado \n"<<
            "Optativa V                                 \n";

            break;
case 10:
    cout << "10 SEMESTRE\n";
    cout << "E.C_UFMT                                      E.C_IFMT\n\n";
    cout << "T.C.C                                       Administracao \n"<<
            "Estágio Supervisionado                      Economia \n";
    cout << "                                            Ciencias Sociais \n";
    cout << "                                            Ciencias do Ambiente \n";
    cout << "                                            Top. Esp. Em Redes e Sist. Distr.\n";
    cout << "                                            Engenharia de Software \n";
    cout << "                                            TCC \n";


    }cin >> a;}


    return 0;
}
