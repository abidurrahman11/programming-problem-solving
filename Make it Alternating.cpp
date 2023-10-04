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
#define MOD 998244353

ll fact[200005];

void f () {
    fact[0] = 1;
    for (int i = 1; i < 200005; i++) {
        fact[i] = ((fact[i - 1] % MOD) * (i % MOD)) % MOD;
    }
}

int main () {
    f ();
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        vector <int> v;
        int n = s.length ();
        s.push_back ('3');
        ll cur = 0, seg = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == s[i + 1]) {
                cur++;
            } else {
                if (cur > 0) {
                    v.push_back (cur);
                    cur = 0;
                }
            }
        }
        ll ans = 1;
        for (auto e: v) {
            seg += e;
            ans = ans * (e + 1) % MOD;
        }
        if (v.size () == 0) {
            ans = 1;
        }
        ans = ans * fact[seg] % MOD;
        cout<<seg<<ws<<ans<<nl;
    }
    return 0;
}