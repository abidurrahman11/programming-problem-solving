// Codeforces Problem: 1846B - Rudolph and Tic-Tac-Toe
// Link: https://codeforces.com/problemset/problem/1846/B
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
    string s[3];
    cin>>s[0]>>s[1]>>s[2];
    for (int i = 0; i < 3; i++) {
        if (s[i][0] == s[i][1] && s[i][1] == s[i][2]) {
            if (s[i][0] != '.') {
                cout<<s[i][0]<<nl;
                return;
            }
        }
    }
    if (s[0][0] == s[1][1] && s[1][1] == s[2][2]) {
        if (s[0][0] != '.') {
            cout<<s[0][0]<<nl;
            return;
        }
    }
    if (s[0][2] == s[1][1] && s[1][1] == s[2][0]) {
        if (s[0][2] != '.') {
            cout<<s[0][2]<<nl;
            return;
        }
    }
    if (s[0][0] == s[1][0] && s[1][0] == s[2][0]) {
        if (s[0][0] != '.') {
            cout<<s[0][0]<<nl;
            return;
        }
    }
    if (s[0][1] == s[1][1] && s[1][1] == s[2][1]) {
        if (s[0][1] != '.') {
            cout<<s[0][1]<<nl;
            return;
        }
    }
    if (s[0][2] == s[1][2] && s[1][2] == s[2][2]) {
        if (s[0][2] != '.') {
            cout<<s[0][2]<<nl;
            return;
        }
    }
    cout<<"DRAW\n";
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        solve ();
    }
    return 0;
}