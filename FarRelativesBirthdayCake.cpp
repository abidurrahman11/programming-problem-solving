#include<iostream>
using namespace std;

int main () {
    int n, ans = 0;
    cin>>n;
    char arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 'C') {
                for (int k = i + 1; k < n; k++) {
                    if (arr[k][j] == 'C') {
                        ans++;
                    }
                }
                for (int k = j + 1; k < n; k++) {
                    if (arr[i][k] == 'C') {
                        ans++;
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}


//Codeforces Problem: Far Relative’s Birthday Cake
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/629/A