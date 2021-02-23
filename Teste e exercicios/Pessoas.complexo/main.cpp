#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    /* o ponteiro nome1 e nome2 facilita muito aqui já que não precisamos de um vetor para passar todos os dados
    e sim só apontar para ele no caso para 'pessoas[][]' */

    char pessoas[3][10];
    char iguais[1][26] = {"Ha_mais_de_1_valor_iguais"};
    char sexo[3], letra, *nome1, *nome2;
    int idade[3], aux = 0, auxFem = 0, Maior = 0, Menor = 0;

    /* Primeiro vamos ler o nome dos usuários */
    for(int i = 0; i < 3; i++){
        cout << "Pessoa [" << i << "] - ";
        cin >> pessoas[i];
    }
    cout << "\nAdicione os generos ('M', para masculino) e ('F', para feminino)\n" << endl;

    /* Vamos abaixo adicionar os dados em relação ao gênero */
    // Aqui fazemos os testes de comparacao e juncao da pessoa, idade e genero com o indice nos vetores[i]
    for(int k = 0; k < 3; k ++){
        cout << "Qual o genero do(a) " << pessoas[k] << ": ";
        cin >> sexo[k];
        letra = toupper(sexo[k]); // Aqui testamos soh o genero 'M' pois so precisamos saber quantos tem, enquanto no 'F' precisamos ver sua idade
        if(letra == 'M'){
            aux++;
        }
    }

    cout << "\nAdicione as idades\n" << endl;

    for(int j = 0; j < 3; j++){
        cout << pessoas[j] << " tem: ";
        cin >> idade[j];
        letra = toupper(sexo[j]);
        if(j == 0){
            Maior = idade[j];
            Menor = idade[j];
            nome1 = pessoas[j];
            nome2 = pessoas[j];
        }else{
            if(Maior < idade[j]){
                Maior = idade[j];
                nome1 = pessoas[j];
            }
            if(Menor > idade[j]){
                Menor = idade[j];
                nome2 = pessoas[j];
            }
            if(letra == 'F'){
                if(idade[j] < 20){
                    auxFem++;
                }
            }
            // Esse subalgoritmo eh usado para testar se ha usuarios com os mesmos indices de idades
                if(Maior == idade[j]){
                    nome1 = iguais[0];
                }
                if(Menor == idade[j]){
                    nome2 = iguais[0];
                }
        }
    }
    // EXIBIÇAO DOS RESULTADOS

    cout << "\nExibicao dos resultados: " << endl;
    cout << "A maior idade eh de " << nome1 << " - " << Maior << endl;
    cout << "A menor idade eh de " << nome2 << " - " << Menor << endl;
    cout << "A quantidade de homens eh: " << aux << endl;
    cout << "A quantidade de meninas com menos de 20 anos eh: " << auxFem << endl;
    return 0;
}
