#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cin>>n;
    int arr[n];

    for (i = 0; i < n; i++){
        cin>>arr[i];
    }

    int max = arr[0];
    int winner = 0;

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            winner = i;
            max = arr[i];
        }
    }

    for (i = winner + 1; i < n; i++) {
        if (arr[i] == max) {
            winner = -2;
        }
    }

    cout<<winner + 1;

    return 0;
}

//https://codeforces.com/problemset/gymProblem/101744/L