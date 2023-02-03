#include <iostream>
#include <vector>
using namespace std;


vector<int> breakingRecords(vector<int> scores) {
    int maxi, mini, i = 0;
    vector<int> vals;
    for(vector<int>::iterator it = scores.begin(); it != scores.end(); it++) {
        if(i == 0) {
            vals.push_back(0);
            vals.push_back(0);
            maxi = *it;
            mini = *it;
        } else {
            if(*it > maxi) {
                maxi = *it;
                vals[0] += 1;
                // cout << vals[0] << " - " << maxi << " = "<< *it << endl;
            }
            if(*it < mini) {
                mini = *it;
                vals[1] += 1;
                // cout << vals[1] << " - " << mini << " = "<< *it << endl;
            }
        }
        i++;
    }

    return vals;
}



int main()
{
    vector<int> pontos = {10, 5, 20, 20, 4, 5, 2, 25, 1};
    vector<int> valors = breakingRecords(pontos);

    for(vector<int>::iterator it = valors.begin(); it != valors.end(); it++)
        cout << *it << " ";

    return 0;
}
