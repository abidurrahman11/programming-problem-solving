// Codeforces Problem: 1619C - Wrong Addition
// Link: https://codeforces.com/problemset/problem/1619/C
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
    ll a, s, pos = 1, ans = 0;
    cin>>a>>s;
    while (a || s) {
        int digA = a % 10, digS = s % 10;
        if (digA <= digS) {
            ans += (digS - digA) * pos;
            a /= 10;
            s /= 10;
        } else {
            digS = s % 100;
            if (digS - digA > 9 || digS - digA < 0) {
                cout<<-1<<nl;
                return;
            }
            ans += (digS - digA) * pos;
            a /= 10;
            s /= 100;
        }
        pos *= 10;
    }
    cout<<ans<<nl;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        solve ();
    }
    return 0;
}