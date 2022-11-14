// Codeforces Problem: Brain's Photos
// Link: https://codeforces.com/problemset/problem/707/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, m, ans = 0;
    cin>>n>>m;
    char arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y') {
                ans = 1;
                break;
            }
        }
    }
    if (ans == 1) {
        cout<<"#Color";
    } else {
        cout<<"#Black&White";
    }
    return 0;
}