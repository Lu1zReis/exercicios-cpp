#include <iostream>

using namespace std;

int main()
{
    int n = 0, maior = 0, menor = 0, medio = 0, iguais = 0, conf, valor, quant;
    cin >> n;
    int vetor[n];
    for(int k = 0; k < n; k++){
        cin >> vetor[k]; // ler os valores
    }

    for(int i = 0; i < n; i++){
        if(i == 0){ // O laco vai entrar aqui e atribuir os valores iniciais
            maior = vetor[i];
            menor = vetor[i];
            iguais = vetor[i];
            }
        else{
        // Aqui vamos descobrir o maior valor e o menor
            if(vetor[i] > maior)
                maior = vetor[i];
            if(vetor[i] < menor)
                menor = vetor[i];
            }
        // Essa linha de código abaixo vai descobrir se existe valores iguais
            for(int j = 0; j < n; j++){
                if(vetor[j] == vetor[i]){
                // Esse if esta comparando se não está por exemplo na posiçao j = 0 e i = 0, se estiver ele sai do laço
                    if(j != i){
                        iguais = vetor[i];
                        valor = vetor[i] + vetor[j];
                        conf = true;
                    }
                }
            }
        }

// Descobrir o valor medio
    for(int m = 0; m < n; m++){
        if(vetor[m] > menor and vetor[m] < maior){
            medio = vetor[m];
        }
    }

    if(conf == true){
        if(iguais == maior){
            cout << "O maior valor eh: " << maior << " e ha mais de um dele" << endl;
            cout << "Juntos os dois somam: " << valor << endl;
            cout << "O menor valor eh: " << menor << endl;
            // Fazer agora a quantidade de presentes ao total
            quant = valor + menor;

            cout << "A quantidade de presentes eh: " << quant;
        }else{
            cout << "O menor valor eh: " << menor << " e ha mais de um dele" << endl;
            cout << "Juntos os dois somam: " << valor << endl;
            cout << "O maior valor eh: " << maior << endl;
            quant = valor + maior;

            cout << "A quantidade de presentes eh: " << quant;
        }
    }else{
        cout << "O maior valor eh: " << maior << endl;
        cout << "O valor medio eh: " << medio << endl;
        cout << "O menor valor eh: " << menor << endl;
        quant = maior + menor + medio;

        cout << "A quantidade de presentes eh: " << quant << endl;
    }

    return 0;
}
