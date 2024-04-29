#include <iostream>
#include <vector>
#include <algorithm> // Para usar std::sort

using namespace std;

int binarySearch(const vector<int> &v, int x) {
    int p = 0, q = v.size() - 1;
    while (p <= q) {
        int middle = p + (q - p) / 2;
        if (v[middle] == x) return middle;
        else if (x < v[middle]) q = middle - 1;
        else p = middle + 1;
    }
    return -1;
}

int calc(const vector<int> &v, const vector<int> &r) {
    vector<int> aux;
    int n = v.size(), m = r.size(), count = 0;
    for (int i = 0; i < n; i++) {
        if (binarySearch(r, v[i]) == -1) {
            if (aux.empty() || binarySearch(aux, v[i]) == -1) {
                aux.push_back(v[i]);
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n, m;
    while (cin >> n >> m && n != 0 && m != 0) {
        vector<int> v(n), r(m);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < m; i++) cin >> r[i];

        sort(v.begin(), v.end()); // Ordena v para otimizar a busca binária
        sort(r.begin(), r.end()); // Ordena r para otimizar a busca binária

        int count;
        if (n < m) count = calc(v, r);
        else if (m < n) count = calc(r, v);
        else {
            int a = calc(v, r), b = calc(r, v);
            count = min(a, b);
        }

        cout << count << endl;
    }
    return 0;
}
