#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    char vetor[10];
    FILE *arquivo;//FILE é basicamente a função de arquivos

    arquivo = fopen("teste.txt","wt");//para gravar
    fprintf(arquivo,"Tudo_bem?");//o que vai para o txt

    fclose(arquivo);//quando terminarmos uma operação, fechar

    arquivo = fopen("teste.txt","rt");//serve para ler o arquivo essa parte
    fscanf(arquivo,"%s",&vetor);//serve basicamente para você ver o que estaria no txt

    cout << vetor << endl;

    fclose(arquivo);

    return 0;
}
