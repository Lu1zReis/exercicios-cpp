#include <iostream>

using namespace std;


int const MAXTAM = 100;
int Pilha[MAXTAM]; // A pilha que vai armazenar os dados
int topo;

void Pilha_Construtor(){
    topo = -1; //Essa função vai construir e adicionar os dados
}
bool Pilha_Vazia(){ // Vai verificar se há algo na pilha
    if(topo == -1) // -1 quer dizer que não há nada e é a baixo da posicao 0
        return true;
    else
        return false;

// Se retornar a falso por exemplo, então quer dizer que há algum valor

}
bool Pilha_Cheia(){
    if(topo == MAXTAM-1)
        return true;
    else
        return false;
// Se retornar a true por exemplo, então quer dizer que a pilha está cheia
}
bool Pilha_Push(int valor){ // Insere valor na pilha
    if(Pilha_Cheia()){
        return false; // Se entrar nessa condicao ele vai retornar false, pois a pilha vai estar cheia
    }else{
        topo++; // Faz o topo subir
        Pilha[topo] = valor; // e inseri aquele valor no topo
        return true;
    }
}
bool Pilha_Pop(int &valor){ // Tira dados do Topo
    if(Pilha_Vazia()){
        return false;
    }else{
        valor = Pilha[topo];
        topo--;
        return true;
    }
}
bool Pilha_Consulta(int &valor){ // Essa Funcao nao tira
    if(Pilha_Vazia()){
        return false;
    }else{
        valor = Pilha[topo];
        return true;
    }

}
int Pilha_Tamanho(){
    return topo+1;
}

int main()
{
    int valor;
    Pilha_Construtor(); // Primeira função a se adicionar

    Pilha_Push(5);
    Pilha_Push(3);
    Pilha_Push(2);
    Pilha_Push(7);

    cout << "Quant. de itens: " << Pilha_Tamanho() << endl << endl;

    while(Pilha_Pop(valor)){
    cout << endl << valor << endl;
    }
    cout << "\nQuant. de itens: " << Pilha_Tamanho() << endl;

    // Basicamente aqui se adiciona o valor ele consuta o ultimo valor/ou a quantidade que tem sem retirar e depois ve quantos tem.
    // Pois ali atras no while, nos retiramos os valores.
    Pilha_Push(2);
    Pilha_Consulta(valor);
    cout << "\n" << valor << "\n";
    cout << "\nQuant. de itens: " << Pilha_Tamanho() << endl;

    return 0;
}
