// Codeforces Problem: Game Outcome
// Link: https://codeforces.com/problemset/problem/157/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n][n], row[n] = {0}, col[n] = {0}, ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            row[i] += arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            col[i] += arr[j][i];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (col[j] > row[i]) {
                ans ++;
            }
        }
    }
    cout<<ans;
    return 0;
}