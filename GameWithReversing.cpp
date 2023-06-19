// Codeforces Problem: C - Game with Reversing
// Link: https://codeforces.com/contest/1834/problem/C
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

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, d1 = 0, d2 = 0;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                d1++;
            }
            if (s1[i] != s2[n - 1 - i]) {
                d2++;
            }
        }
        if (d1 == 0) {
            cout<<0<<nl;
        } else if (d2 == 0) {
            cout<<2<<nl;
        } else if (d2 < d1 || d1 == d2) {
            if (d2 % 2 == 0 || d1 == d2) {
                cout<<d2 + d2 - 1<<nl;
            } else {
                cout<<d2 + d2<<nl;
            }
        } else {
            if (d1 % 2 == 0) {
                cout<<d1 + d1<<nl;
            } else {
                cout<<d1 + d1 - 1<<nl;
            }
        }
    }
    return 0;
}