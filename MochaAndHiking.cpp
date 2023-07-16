// Codeforces Problem: 1559C - Mocha and Hiking
// Link: https://codeforces.com/problemset/problem/1559/C
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// #include<vector>
// #include<map>
// #include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

void solve () {
    int n;
    cin>>n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        cin>>arr[i];
    }
    if (arr[1] == 1) {
        cout<<n + 1<<ws;
        for (int i = 1; i <= n; i++) {
            cout<<i<<ws;
        }
        return;
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] == 0 && arr[i + 1] == 1) {
            for (int j = 1; j <= i; j++) {
                cout<<j<<ws;
            }
            cout<<n + 1<<ws;
            for (int j = i + 1; j <= n; j++) {
                cout<<j<<ws;
            }
            return;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout<<i<<ws;
    }
    cout<<n + 1<<ws;
}

int main () {
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        solve ();
        cout<<nl;
    }
    return 0;
}