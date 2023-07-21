// Codeforces Problem: 1514B - AND 0, Sum Big
// Link: https://codeforces.com/problemset/submission/1514/214758443
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
        int n, k;
        ll ans = 1;
        cin>>n>>k;
        for (int i = 0; i < k; i++) {
            ans = ans * n % MOD;
        }
        cout<<ans<<nl;
    }
    return 0;
}