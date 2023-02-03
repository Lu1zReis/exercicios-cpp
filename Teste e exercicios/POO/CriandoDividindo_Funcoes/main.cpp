#include <iostream>

using namespace std;

int main()
{
    string valorUsuario;

    // dividindo as tarefas em valores inteiros e as operacoes em caracteres

    // 1 = VARIAVEL / 2 = CLASSES / 3 = METODOS
    int tipo = tipoMetodo(valorUsuario);

    // A = DIVIDIR / B = COMBINAR
    char dividir_combinar = tipoOpercao(valorUsuario);

    return 0;
}
