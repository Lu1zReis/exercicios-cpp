#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//o SIZE serve para definir um valor unico, por ex: vetor[200], pode ser escrito vetor[SIZE]
#define SIZE 200

using namespace std;
//aqui vai ser aonde ficara os dados da agenda e as var globais
char nome[SIZE][50];
char email[SIZE][50];
int telefone[SIZE][50];
int op;

// a funcao lista passara todos os registros ja feitos
void lista(){
    printf("Os cadastros Registrados sao esses: \n");

    for(int i = 0; i<SIZE; i++){

    //declaramos a condição if para ele nao ficar rodando todo o vetor de SIZE que tem 200 de memoria
    //já o * serve como ponteiro para puxar os dados da var global 'nome'
    // ja o '*nome[i]>0' servira para identificar se na memoria da var nome ha algo e a var i vai executar e procurar algum valor dentro dessa memoria
            if(*nome[i]>0){
                printf("\nNome: %s\nE-mail: %s\nTelefone: %d\n\n", nome[i], email[i], telefone[i]);
                printf("------------------\n");
        }
        else{

    /*o break serve para que se no if por exemplo, tem um valor na linha 0, 1, mas na 2, ja não tem nada
    ele vai checar isso e entrar no else e vai sair do laço de repeticao.
    */
            break;
        }
    }
}

//essa funcao vai retornar a toda pesquisa da agenda
void pesquisa(){
    //essas var servira como um modo de pesquisa
int TelefonePesquisa;
char emailPesquisa[50];
char NomePesquisa[50];

    do{
        printf("\n1 - Digitar o numero\n2 - Digitar o e-mail\n3 - Digitar o nome\n: ");

        // o & comercial serve como um ponteiro, basicamente para mostrar aonde o valor armazenado ira ficar
        scanf("%d", &op);

    switch(op){
        case 1:
            printf("\nDigite o numero: ");
            scanf("%d", &TelefonePesquisa);
            for(int i=0; i<SIZE; i++){
                if(TelefonePesquisa == telefone[i][i]){
                    printf("\nNome: %s\ne-mail: %s\nTelefone: %d", nome[i], email[i], telefone[i]);
                }
            }
        break;
        case 2:
            printf("Digite o e-mail: ");
            scanf("%s", &emailPesquisa);
            for(int j = 0; j<SIZE; j++){
                if(strcmp(email[j], emailPesquisa)==0){
                    printf("\nNome: %s\nE-mail: %s\nNumero: %d", nome[j], email[j], telefone[j]);
                }
            }
        break;
        case 3:
            printf("Digite o nome: ");
            scanf("%s", &NomePesquisa);
            for(int k = 0; k<SIZE; k++){
                if(strcmp(nome[k], NomePesquisa)==0){
                    printf("\nNome: %s\nE-mail: %s\nNumero: %d", nome[k], email[k], telefone[k]);
                }else if(k>=SIZE){
                    cout << "Não há esse nome na lista" << endl;
                }
            }
            break;
        default:
            printf("\nOpção Inválida\n");
        }
    printf("\nDigite 1 para continuar pesquisando: ");
    scanf("%d", &op);
    }while(op == 1);
}

void agenda(){
    /*semre que rodarmos a funcao agenda e dermos os valores x, a var linha, vai ficar com aquele valor
    x, gracas a funcao static

    */
    static int linha=0;

    do{
/*Cada vez que executarmos um processo, as variaveis 'nome', 'email' e 'telefone',
vao ficar no valor inicial ou na linha 0, e assim por diante enquanto formos cadastrando
*/
       printf("\nDigite o nome: ");

/*aqui nas var 'nome', 'email' e 'telefone', como ja dito antes, o & vai alocar o valor na memoria
 isso quer dizer que, vai ser basicamente um ponteiro, para colocar o valor nessas var globais, e
 chamarmos quando precisarmos na função 'pesquisa'.
 */
       scanf("%s", &nome[linha]);
       printf("Digite o E-mail: ");
       scanf("%s", &email[linha]);

       printf("Digite seu numero: ");
       scanf("%d", &telefone[linha]);

       printf("\n\n");
       printf("1 - Continuar Cadastrando\nN valor - Parar\n: ");

       scanf("%d", &op);
    //adicionamos um incremento para cada vez que executarmos, a var linha vai trocando de valor
       linha++;
       if(op != 1){
        system("exit");
       }
    }while(op == 1 );

}
/*void menu(){
    int escolha;
    printf("Bem vindo ao menu da agenda! O que voce deseja?");
    printf("Numero 1: Cadastrar uma pessoa\nNumero 2: Procurar um cadastro\nNumero 3: Listar todos os cadastros\n: ");
    scanf("%d", &op);
    do{
    switch(op){
case 1:
    agenda();
    break;
case 2:
    break;
case 3:
    break;
default:
    printf("Opcao Invalida, tente de novo");
    printf("Digite 1 se deseja retornar: ");
    scanf("%d", &escolha);

        }while(escolha==1);
    }
}
*/
int main()
{

    do{
            //serve para limpar os dados sempre que terminarmos um processo
        system("cls");

        printf("\n-----Menu-----\n");
        printf("\n1 - Cadastrar\n2 - Listar\n3 - Pesquisar\n4 - Sair\n: ");
        scanf("%d", &op);
        switch(op){
    case 1:
        agenda();
        break;
    case 2:
        if(telefone[0][0] == NULL){
            cout << "Por favor agende primeiro: " << endl;
            agenda();
        }else{
        lista();}
//podemos dar um 'system("pause");' ou 'getchar();' para nao deixar aparecer rapido demais no prompt
        getchar();
        getchar();
        break;
    case 3:
        if(telefone[0][0] == NULL){
            cout << "Por favor agende primeiro: " << endl;
            agenda();
        }else{
            pesquisa();
        }
        break;
    case 4:
        system("exit");
        break;
    default:
        printf("Opcao Invalida, digite novamente\n");
        system("pause");
        break;
        }
/* diferente de 4, servira para por exemplo: ele rodara qualquer numero, diferente de 4
e entrara ou em default ou em um dos case, mas se clicar em 4, ele saira do loop.
*/
    }while(op != 4);
    system("pause");
    return 0;
}
