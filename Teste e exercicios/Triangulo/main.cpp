#include <iostream>

using namespace std;

void triangulo(float LadoMaior=0, float LadoMedio=0, float LadoMenor = 0){
    cout.precision(2);
    cout << "     " << "   1   " << endl;
    cout << "     " << "  1 1  " << endl;
    cout << fixed << LadoMenor << " " << " 1   1  " << LadoMedio << endl;
    cout << "     " << "1     1" << endl;
    cout << "     " << "=======" << endl;
    cout << "       "<< LadoMaior <<"   " << endl;
}

int main(){

    float lado1 = 0, lado2 = 0, lado3 = 0, LadoMedio = 0, LadoMenor = 0, LadoMaior = 0, SomaLados[3], difeLados[3];
    int aux = 0;

    cin >> lado1;
    cin >> lado2;
    cin >> lado3;

    if(lado1 > lado2 and lado1 > lado3){
        LadoMaior = lado1;
        if(lado2 > lado3){
            LadoMedio = lado2;
            LadoMenor = lado3;
            SomaLados[0] = LadoMedio + LadoMaior;
            SomaLados[1] = LadoMedio + LadoMenor;
            SomaLados[2] = LadoMenor + LadoMaior;

            difeLados[0] = LadoMaior - LadoMedio;
            difeLados[1] = LadoMedio - LadoMenor;
            difeLados[2] = LadoMaior - LadoMenor;

            if(SomaLados[0] > LadoMenor and difeLados[0] < LadoMenor){
                aux += 1;
                if(SomaLados[1] > LadoMaior and difeLados[1] < LadoMaior){
                    aux += 1;
                    if(SomaLados[2] > LadoMedio and difeLados[2] < LadoMedio){
                        aux+=1;
                    }
                }
            }

        }else{
            LadoMedio = lado3;
            LadoMenor = lado2;
            SomaLados[0] = LadoMedio + LadoMenor;
            SomaLados[1] = LadoMaior + LadoMedio;
            SomaLados[2] = LadoMenor + LadoMaior;

            difeLados[0] = LadoMedio - LadoMenor;
            difeLados[1] = LadoMaior - LadoMedio;
            difeLados[2] = LadoMenor - LadoMaior;

            if(SomaLados[0] > LadoMenor and difeLados[0] < LadoMenor){
                aux += 1;
                if(SomaLados[1] > LadoMaior and difeLados[1] < LadoMaior){
                    aux += 1;
                    if(SomaLados[2] > LadoMedio and difeLados[2] < LadoMedio){
                        aux+=1;
                    }
                }
            }

        }
    }
    if(lado2 > lado1 and lado2 > lado3){
        LadoMaior = lado2;
        if(lado1 > lado3){
            LadoMedio = lado1;
            LadoMenor = lado3;
            SomaLados[0] = LadoMedio + LadoMenor;
            SomaLados[1] = LadoMaior + LadoMedio;
            SomaLados[2] = LadoMenor + LadoMaior;

            difeLados[0] = LadoMedio - LadoMenor;
            difeLados[1] = LadoMaior - LadoMedio;
            difeLados[2] = LadoMenor - LadoMaior;

            if(SomaLados[0] > LadoMenor and difeLados[0] < LadoMenor){
                aux += 1;
                if(SomaLados[1] > LadoMaior and difeLados[1] < LadoMaior){
                    aux += 1;
                    if(SomaLados[2] > LadoMedio and difeLados[2] < LadoMedio){
                        aux+=1;
                    }
                }
            }

        }else{
            LadoMedio = lado3;
            LadoMenor = lado1;
            SomaLados[0] = LadoMedio + LadoMenor;
            SomaLados[1] = LadoMaior + LadoMedio;
            SomaLados[2] = LadoMenor + LadoMaior;

            difeLados[0] = LadoMedio - LadoMenor;
            difeLados[1] = LadoMaior - LadoMedio;
            difeLados[2] = LadoMenor - LadoMaior;

            if(SomaLados[0] > LadoMenor and difeLados[0] < LadoMenor){
                aux += 1;
                if(SomaLados[1] > LadoMaior and difeLados[1] < LadoMaior){
                    aux += 1;
                    if(SomaLados[2] > LadoMedio and difeLados[2] < LadoMedio){
                        aux+=1;
                    }
                }
            }
        }
    }
    if(lado3 > lado2 and lado3 > lado1){
        LadoMaior = lado3;
        if(lado2 > lado1){
            LadoMedio = lado2;
            LadoMenor = lado1;
            SomaLados[0] = LadoMedio + LadoMenor;
            SomaLados[1] = LadoMaior + LadoMedio;
            SomaLados[2] = LadoMenor + LadoMaior;

            difeLados[0] = LadoMedio - LadoMenor;
            difeLados[1] = LadoMaior - LadoMedio;
            difeLados[2] = LadoMenor - LadoMaior;
            if(SomaLados[0] > LadoMenor and difeLados[0] < LadoMenor){
                aux += 1;
                if(SomaLados[1] > LadoMaior and difeLados[1] < LadoMaior){
                    aux += 1;
                    if(SomaLados[2] > LadoMedio and difeLados[2] < LadoMedio){
                        aux+=1;
                    }
                }
            }
        }else{
            LadoMedio = lado1;
            LadoMenor = lado2;
            SomaLados[0] = LadoMedio + LadoMenor;
            SomaLados[1] = LadoMaior + LadoMedio;
            SomaLados[2] = LadoMenor + LadoMaior;

            difeLados[0] = LadoMedio - LadoMenor;
            difeLados[1] = LadoMaior - LadoMedio;
            difeLados[2] = LadoMenor - LadoMaior;

            if(SomaLados[0] > LadoMenor and difeLados[0] < LadoMenor){
                aux += 1;
                if(SomaLados[1] > LadoMaior and difeLados[1] < LadoMaior){
                    aux += 1;
                    if(SomaLados[2] > LadoMedio and difeLados[2] < LadoMedio){
                        aux+=1;
                    }
                }
            }
        }
    }

    cout << LadoMaior << endl;
    cout << LadoMedio << endl;
    cout << LadoMenor << endl;

    if(aux == 3){
        cout << "Forma-se um triangulo" << endl;
       // triangulo(LadoMaior, LadoMedio, LadoMenor);
    }else{
        cout << "Nao forma-se um triangulo" << endl;
    }

    return 0;
}
