// Codeforces Problem: L - Controllers
// Link: https://codeforces.com/contest/1776/problem/L
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

#define ll long long

int main () {
    ll n, q, p = 0, m = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        char c;
        cin>>c;
        if (c == '+') {
            p++;
        } else {
            m++;
        }
    }
    cin>>q;
    while (q--) {
        ll x, y;
        cin>>x>>y;
        if (p == m) {
            cout<<"YES\n";
            continue;
        }
        ll numr = (m - p) * y, denm = x - y;
        if (denm == 0 || numr % denm != 0) {
            cout<<"NO\n";
            continue;
        }
        ll k = numr / denm;
        if (k >= -m && k <= p) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}