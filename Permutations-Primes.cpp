// Codeforces Problem: B - Permutations & Primes
// Link: https://codeforces.com/contest/1844/problem/B
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
        int n, cur = 3;
        cin>>n;
        for (int i = 0; i < n; i++) {
            if (i == n / 2) {
                cout<<1<<ws;
            } else if (i == 0) {
                cout<<2<<ws;
            } else if (i == n - 1) {
                cout<<3<<ws;
            } else {
                cur++;
                cout<<cur<<ws;
            }        
        }
        cout<<nl;
    }
    return 0;
}