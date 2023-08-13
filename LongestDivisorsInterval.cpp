// Codeforces Problem: 1855B - Longest Divisors Interval
// Link: https://codeforces.com/problemset/problem/1855/B
// Status: Accepted      Language: C++

#include<iostream>
#include<math.h>
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

int main () {
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        ll n, mx = 0, cur = 0;
        cin>>n;
        for (ll i = 1; i <= 10000; i++) {
            if (n / i == 0) {
                break;
            }
            if (n % i == 0) {
                cur++;
            } else {
                cur = 0;
            }
            mx = max (cur, mx);
        }
        cout<<mx<<nl;
    }
    return 0;
}