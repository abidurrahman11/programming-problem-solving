// Codeforces Problem: Games
// Link: https://codeforces.com/problemset/problem/268/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, ans = 0;
    cin>>n;
    int h[n], g[n];
    for (int i = 0; i < n; i++) {
        cin>>h[i]>>g[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (h[i] == g[j]) {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}