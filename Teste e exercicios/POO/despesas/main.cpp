#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

// definindo arquivo em modo fstream para abrirmos em modo leitura ou escrita
fstream arquivo;

// usamos esse struct de varias formas durante o codigo, pois ele sera a base, sendo para adicionar, pesquisar, etc.
struct conta {
    string nome;
    string dia, mes;
    string data;
    string valor;
    int id;
};

// funcao getNome para pegar o nome em uma linha que o usuario passar do arquivo
string getNome(string *l) {
    string nome, linha = *l;
    for(int i = 0; i < linha.size(); i++) {
        if(linha[i] == ';')
            break;
        nome += linha[i];
    }
    return nome;
}

// funcao getValor para pegar o valor em uma linha que o usuario passar do arquivo
string getValor(string *l) {
    string linha = *l;
    string valor;
    float cont = 0;
    for(int i = 0; i < linha.size(); i++) {
        if(linha[i] == ';')
            cont++;
        if(cont == 2) {
            if(linha[i] != ';')
                valor += linha[i];
        }
    }
    return valor;
}

// funcao getValor para pegar a data em uma linha que o usuario passar do arquivo
string getData(string *l) {
    string linha = *l;
    string valor;
    int cont = 0;
    for(int i = 0; i < linha.size(); i++) {
        if(linha[i] == ';') {
            for(int j = i+1; j < linha.size(); j++) {
                if(linha[j] == ';') {
                    return valor;
                }
                valor += linha[j];
            }
        }

    }
}

// colocando o 0 a esquerda (deixar bonito na saida)
string formataData(string *d) {
    string novaD = *d;
    if(novaD.size() == 1) {
        novaD.insert(0, "0");
    }
    return novaD;
}

// usando essa funcao para dar um espacamento e deixar "responsivo" na saida do listContas
int maiorNome() {

    string linha, nome;
    vector<string> nomes;

    int pos = 0, maior;

    arquivo.open("bancoDados.txt", ios::in);
    if(arquivo.is_open()) {
        while(getline(arquivo, linha)) {
            int cont = 0;
            for(int i = 0; i < linha.size(); i++) {
                if(linha[i] == ';') {
                    cont++;
                }
                if(cont == 0) {
                    nome += linha[i];
                }
            }
            nomes.push_back(nome);
            nome = "";
        }
        arquivo.close();
    }

    for(int j = 0; j < nomes.size(); j++) {
        if(j == 0) {
            maior = nomes[j].size();
        } else {
            if(maior < nomes[j].size()) {
                maior = nomes[j].size();
            }
        }
    }

    return maior;
}

// usando essa funcao para dar um espacamento e deixar "responsivo" na saida do listContas
int maiorvalor() {
    string linha, valor;
    vector<string> valores;

    int pos = 0, maior;

    arquivo.open("bancoDados.txt", ios::in);
    if(arquivo.is_open()) {
        while(getline(arquivo, linha)) {
            int cont = 0;
            for(int i = 0; i < linha.size(); i++) {
                if(linha[i] == ';') {
                    cont++;
                }
                if(cont == 2) {
                    valor += linha[i];
                }
            }
            valores.push_back(valor);
            valor = "";
        }
        arquivo.close();
    }

    for(int j = 0; j < valores.size(); j++) {
        if(j == 0) {
            maior = valores[j].size();
        } else {
            if(maior < valores[j].size()) {
                maior = valores[j].size();
            }
        }
    }

    return maior;
}

// remove conta trabalha com dados vindo do update, pois ele apaga um valor, e sobreescreve.
/*
   Porem ele tambem somente apaga um dado especifico, caso os parametros venham com valores nulos
   ele entende que nao eh valores para serem atualizados e sim somente apagados
*/
void removeConta(string *atualizaValor, string *novosDados) {
    conta salva;
    string linha;
    vector<string> linhas;
    bool existe = false;

        // usando a função remove conta para remover um valor e "atualizar". Entao caso esteja vindo um valor do parametro
        // sabemos que estamos fazendo um update
        if (*atualizaValor != "") {
            arquivo.open("bancoDados.txt", ios::in);

            if(arquivo.is_open()) {

                while(getline(arquivo, linha)) {

                    if (getNome(&linha) != *atualizaValor) {

                        salva.nome = getNome(&linha);
                        salva.valor = getValor(&linha);
                        salva.data = getData(&linha);
                        linhas.push_back(salva.nome+";"+salva.data+";"+salva.valor+"\n");


                    } else if (getNome(&linha) == *atualizaValor) {
                        existe = true;
                        linhas.push_back(*novosDados+"\n");

                    }

                }
                // se nome existir no banco de dados, vamos salvar todos as linhas - exceto a que estiver o nome
                arquivo.close();
                if(existe) {
                    arquivo.open("bancoDados.txt", ios::out);
                    for(auto it = linhas.begin(); it != linhas.end(); it++) {
                        arquivo << *it ;
                    }
                    cout << "\nconta '" << *atualizaValor << "' foi atualizada com SUCESSO!\n";
                    arquivo.close();
                } else {
                    cout << "\nO nome passado nao foi encontrado" << endl;
                }
        } else {
            cout << "\nArquivo nao pode ser aberto" << endl;
        }
    } else {
        string nome;
        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
        cout << "Qual conta deseja remover?\n";
        cout << "Digite o nome da conta: ";
        cin >> nome;
        arquivo.open("bancoDados.txt", ios::in);
        if(arquivo.is_open()) {
            while(getline(arquivo, linha)) {
                if(getNome(&linha) == nome) {
                    existe = true;
                } else {
                    linhas.push_back(linha+"\n");
                }
            }
            arquivo.close();
        }
        if(existe) {
            arquivo.open("bancoDados.txt", ios::out);
            if(arquivo.is_open()) {
                for(auto it = linhas.begin(); it != linhas.end(); it++)
                    arquivo << *it;
                arquivo.close();
                cout << "\nconta '" << nome << "' foi deletada com SUCESSO!\n";
            } else {
                cout << "Nao foi possivel abrir o arquivo\n";
            }
        } else {
            cout << "\nNao foi possivel achar a conta que deseja remover\n";
        }
    }
}

// updateConta usamos um nome para fazer a pesquisa e em seguida apagamos aquele dado, para sobreescrever um novo
void updateConta() {
    // arquivo.open("bancoDados.txt", ios::in);
    conta pesquisar;
    conta atualizar;
    string novaLinha;

    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
    cout << "Qual conta deseja atualizar (por nome): ";
    cin >> pesquisar.nome;
    cout << "Digite o novo nome da conta: ";
    cin >> atualizar.nome;
    cout << "Digite as novas datas: dia e o mes respectivamente: ";
    cin >> atualizar.dia >> atualizar.mes;
    cout << "Digite o valor da conta: ";
    cin >> atualizar.valor;

    // colocando o 0 a esquerda
    atualizar.dia = formataData(&atualizar.dia);
    atualizar.mes = formataData(&atualizar.mes);

    novaLinha = atualizar.nome+";"+atualizar.dia+"/"+atualizar.mes+";"+atualizar.valor;

    removeConta(&pesquisar.nome, &novaLinha);
}

// parte do codigo aonde adicionamos valores novos no arquivo
void addConta() {
    // VARIAVEIS E OBJETOS DA FUNCAO
    conta adicionar;
    arquivo.open("bancoDados.txt", ios::out|ios::app);
    char opc = 's';

    while(opc == 'S' or opc == 's') {
        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
        cout << "Digite o nome da conta: ";
        cin >> adicionar.nome;
        cout << "Digite o dia e o mes respectivamente: ";
        cin >> adicionar.dia >> adicionar.mes;
        cout << "Digite o valor da conta: ";
        cin >> adicionar.valor;

        adicionar.dia = formataData(&adicionar.dia);
        adicionar.mes = formataData(&adicionar.mes);

        arquivo << adicionar.nome << ";" << adicionar.dia << "/" <<adicionar.mes << ";" << adicionar.valor << endl;

        cout << "Deseja continuar?[s/n] ";
        cin >> opc;
    }
    cout << "\nnovas contas foram adicionadas com SUCESSO!\n";
    arquivo.close();
}

// parte do codigo aonde listamos os valores do arquivo
void listContas() {
    // VARIAVEIS E OBJETOS DA FUNCAO
    int nomeSize = maiorNome();
    int contaSize = maiorvalor();
    // int valorSize = maiorValor();
    string linha;
    conta lista;
    arquivo.open("bancoDados.txt", ios::in);

    if(arquivo.is_open()) {
        cout << "   NOME           R$ VALOR       DATA\n";
        while(getline(arquivo, linha)) {
             // PEGANDO OS RESPECTIVOS VALORES DAS LINHAS
            lista.nome = getNome(&linha);
            lista.valor = getValor(&linha);
            lista.data = getData(&linha);

            //CENTRALIZANDO O TEXTO (NOME PARA VALOR)
            cout << "  " << lista.nome << "         ";
            int diferenca = nomeSize - lista.nome.size();
            for(int i = 0; i < diferenca; i++)
                cout << " ";

            // CENTRALIZANDO O TEXTO (VALOR PARA DATA)
            int diferenca2 = contaSize - lista.valor.size();
            for(int i = 0; i < diferenca2; i++)
                cout << " ";
            cout << lista.valor << "         " << lista.data << endl;


        }
        arquivo.close();
    } else {
         cout << "Nao foi possivel abrir o arquivo\n";
     }

}

// parte do codigo que será trabalhara com todas as outras funcoes
int menu() {

    int opc = 0;
    float val = 0;
    string aux1 = "", aux2 = "", linha;
    arquivo.open("bancoDados.txt", ios::in);
    while(getline(arquivo, linha)) {
        val += std::stof(getValor(&linha));
    }
    arquivo.close();
    cout << "Valor gasto: R$ " << val << endl;
    cout << "========MENU=========" << endl;
    cout << "1 - LISTAR CONTAS" << endl;
    cout << "2 - ADICIONAR CONTA" << endl;
    cout << "3 - ATUALIZAR CONTA" << endl;
    cout << "4 - REMOVER CONTA" << endl;
    cout << "5 - SAIR DO PROGRAMA" << endl;
    cout << "\n";
    // validando a escolha
    while((opc != 1) and (opc != 2) and (opc != 3) and (opc != 4) and (opc != 5)) {
        cout << "escolha uma opção: ";
        cin >> opc;
    }

    // redirecionando
    switch(opc) {
    case 1:
        listContas();
        return 1;
    case 2:
        addConta();
        return 2;
    case 3:
        updateConta();
        return 3;
    case 4:
        removeConta(&aux1, &aux2);
        return 4;
    case 5:
        cout << "Programa finalizado!" << endl;
        return 5;
    }

}

int main()
{
    // deixando em loop até o usuário finalizar
    int sair = 0;
    while(sair != 5) {
        cout << "\n---------------------\n";
        sair = menu();
    }
    return 0;
}
