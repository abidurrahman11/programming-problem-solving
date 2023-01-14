// Codeforces Problem: 366A - Dima and Guards
// Link: https://codeforces.com/problemset/problem/366/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    int s = 100000, n;
    int a[s], b[s], c[s], d[s];
    cin>>n;
    for (int i = 1; i <= 4; i++) {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    for (int i = 1; i <= 4; i++) {
        if (min(a[i], b[i]) + min(c[i], d[i]) <= n) {
            cout<<i<<" "<<min(a[i], b[i])<<" "<<n - (min(a[i], b[i]));
            return 0;
        }
    }
    cout<<-1;
    return 0;
}