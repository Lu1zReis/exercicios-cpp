#include <iostream>
#include <vector>
#include <string>

using namespace std;
/*
vector<int> maxiMin(int *arr, int *n) {
    goals[2] = {};
    int max, min;
    for(int i = 0; i < *n; i++) {
        if(i == 0) {
            goals[0] = 0;
            goals[1] = 0;
            max = arr[i];
            min = arr[i];
        } else {
            if(arr[i] > max) {
                max = arr[i];
                goals[0] += 1;
            } else if(arr[i] < min) {
                min = arr[i];
                goals[1] += 1;
            }
        }
    }
    return goals;
}
*/

vector<int> funcaoGenerica(vector<int> arr) { // como trabalhamos com ele
    vector<int> vetor;
    for(int i = 0; i < arr.size(); i++) {
        vetor[i] = i * arr[i];
    }
    return vetor;
}

int main() {
    string nome = "Luiz";
    //vector<int>::iterator l;
    cout << nome.size() << endl;
    for(int i = 0; i < nome.size(); i++) {
        cout << nome[i] << "-";
    }
    cout << endl;
    vector<int> arr = {12,24,10,24};
    vector<int> arr2 = {3,5,6,7};
    arr.pop_back();

    arr.push_back(2); // adiciona um elemento na últoma posição
    arr.insert(arr.begin(), 3); // adiciona na posição que queremos. Podemos também passar arr.end()
    arr.emplace(arr.begin(), 2); // adiciona em uma posição do vetor e empurra tudo para frente, podemos usar tambm o arr.end()
    arr.emplace_back(2); // adiciona valor no fim. Mas podemos usar arr.end() ou push_back() nesse caso
    arr.erase(arr.begin()); // apagando uma pos especifica

    for(int j = 0; j < arr.size(); j++) { // .size() verifica o tamanho
        cout << arr[j] << " ";
    }
    cout<<"\n";

    arr.clear(); // apagando o vetor
    arr.swap(arr2); // copiando os dados de outro vetor
    arr.assign(3, 2); // aqui ele adiciona 3x o valor 2

    for(int j = 0; j < arr.size(); j++) { // .size() verifica o tamanho
        arr[j] = j;
        cout << arr[j];
    }
    cout<<"\n";


    for(auto k = arr.rbegin(); k != arr.rend(); ++k) { // iniciando do fim para o incio
        cout << "arr at(" << *k << ") = "  << arr.at(*k) << "\n"; // verificando o que tem em cada posição
    }

    arr2.insert(arr2.begin(), funcaoGenerica(arr).begin());
    cout << arr2[0] << endl;
    arr.clear(); // deixando o vetor nulo
    cout << "Vetor esta vazio: " << arr.empty();
    /*
    for(auto k = arr2.rbegin(); k != arr2.rend(); ++k) { // iniciando do fim para o incio
        cout << *k; // verificando o que tem em cada posição
    }
    */
    return 0;
}

