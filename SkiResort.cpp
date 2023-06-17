// Codeforces Problem: 1840C - Ski Resort
// Link: https://codeforces.com/problemset/problem/1840/C
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
        ll n, k, q;
        cin>>n>>k>>q;
        ll days = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin>>a;
            if (a <= q) {
                days++;
            } else if (a > q && days >= k) {
                ll d = (days - k) + 1;
                ans += ((d * (d + 1)) / 2);
                days = 0;
            } else {
                days = 0;
            }
        }
        if (days >= k) {
            ll d = (days - k) + 1;
            ans += ((d * (d + 1)) / 2);
        }
        cout<<ans<<nl;
    }
    return 0;
}