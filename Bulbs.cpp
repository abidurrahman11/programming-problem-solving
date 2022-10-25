// Codeforces Problem: Bulbs
// Link: https://codeforces.com/problemset/problem/615/A
// Status: Accepted      Language: C++


#include<iostream>
using namespace std;

int main () {
    int n, m, arr[1001];
    cin>>n>>m;
    for (int i = 0; i < n; i++) {
        int a;
        cin>>a;
        for (int i = 0; i < a; i++) {
            int b;
            cin>>b;
            arr[b] = b;
        }
    }
    for (int i = 1; i <= m; i++) {
        if (arr[i] != i) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}