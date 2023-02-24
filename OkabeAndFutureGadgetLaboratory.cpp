// Codeforces Problem: 821A
// Link: https://codeforces.com/contest/821/problem/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bool flag = false;
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < n; l++) {
                    if (arr[i][j] == arr[i][k] + arr[l][j] || arr[i][j] == 1) {
                        flag = true;
                    }
                }
            }
            if (flag == false) {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}