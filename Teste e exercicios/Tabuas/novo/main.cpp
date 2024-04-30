#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int> &v, int x) {
    int p = 0, q = v.size(), middle;
    while (p < q) {
        middle = (p + q) / 2;
        if (x == v[middle]) return middle;
        else if (x < v[middle]) p = middle + 1;
        else q = middle - 1;
    }
    return -1;
}

int verify(vector<int> &v, int l, int c, int e) {
    int i = 0, tam = v.size();
    int flag = 0, cont = 0;
    c = c * 100;

    while (i < v.size() && flag < c) {
        // for (int k = 0; k < v.size(); k++) cout << v[k] << " ";
        // cout << endl;
        if (v[i] <= l) {
            if (v[i] == l) {
                flag += e;
                cont++;
                v.erase(v.begin()+i);
            }
            else {
                int temp = binarySearch(v, l - v[i]);
                //cout << "\nv: " << v[i] << " b: " << l - v[i]<< endl;
                if (temp != -1 && i != temp) {
                    //cout << "achou" << endl;
                    flag += e;
                    cont += 2;
                    v.erase(v.begin()+i);
                    v.erase(v.begin()+(temp-1));
                } else i++;
            }
        } else i++;
    }
    if (flag == c) return cont;
    return -1;
}

int main () {
    int larg, comp;
    
    while (cin >> larg >> comp && larg != 0 && comp != 0) {
        vector<int> vet, aux;
        int quant=0, expe=0, temp=0, temp2=0;
        cin >> expe;
        cin >> quant;

        for (int i = 0; i < quant; i++) {
            cin >> temp;
            if (temp <= larg || temp <= comp) vet.push_back(temp);
        }

        sort(vet.begin(), vet.end());
        reverse(vet.begin(), vet.end());
        
        if (quant < comp || quant < larg) {
            if (quant < comp && quant < larg) cout << "impossivel" << endl;
            else if (quant < comp) {
               temp = verify(vet, comp, larg, expe);
               if (temp == -1) cout << "impossivel" << endl;
               else cout << temp << endl;
            }
            else {
               temp = verify(vet, larg, comp, expe);
               if (temp == -1) cout << "impossivel" << endl;
               else cout << temp << endl;
            }
        } else {
            copy(vet.begin(), vet.end(), back_inserter(aux)); 
            //for (int k = 0; k < vet.size(); k++) cout << vet[k] << " ";
            temp  = verify(vet, larg, comp, expe);  
            //cout << "\nT2\n" << endl;
            //for (int k = 0; k < aux.size(); k++) cout << aux[k] << " ";
            //cout << endl << endl;
            temp2 = verify(aux, comp, larg, expe);
            if (temp == -1 && temp2 == -1) cout << "impossivel" << endl;
            else if (temp == -1) cout << temp2 << endl;
            else if (temp2 == -1) cout << temp << endl;
            else if (temp < temp2) cout << temp << endl;
            else cout << temp2 << endl;
            
        }
    }

    return 0;
}
