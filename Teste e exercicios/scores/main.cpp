#include <iostream>
#include <vector>
using namespace std;

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

int main() {
    int n = 5, resp[2]={};
    int arr[n] = {12,24,10,24};
    vector<int> resp = maxiMin(arr, &n);

    return 0;
}
