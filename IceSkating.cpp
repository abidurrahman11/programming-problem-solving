// Codeforces Problem: 217A - Ice Skating
// Link: https://codeforces.com/problemset/problem/217/A
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
#include<vector>
// #include<map>
// #include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

int n, x[100], y[100], connected[100];

void connect (int i) {
    connected[i] = 1;
    for (int j = 0; j < n; j++) {
        if (connected[j] == 0 && (x[i] == x[j] || y[i] == y[j])) {
            connect (j);
        }
    }
}

int main () {
    cin>>n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin>>x[i]>>y[i];
    }
    for (int i = 0; i < n; i++) {
        if (connected[i] == 0) {
            ans++;
            connect (i);
        }
    }
    cout<<ans - 1;
    return 0;
}