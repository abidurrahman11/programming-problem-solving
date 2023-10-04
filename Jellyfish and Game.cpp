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
        int n, m, k;
        cin>>n>>m>>k;
        ll jsum = 0, x, jmn = MOD, gmn = MOD, jmx = 0, gmx = 0;
        for (int i = 0; i < n; i++) {
            cin>>x;
            jsum += x;
            jmn = min (jmn, x);
            jmx = max (jmx, x);
        }
        for (int i = 0; i < m; i++) {
            cin>>x;
            gmn = min (gmn, x);
            gmx = max (gmx, x);
        }
        ll ans;
        if (gmx > jmn) {
            ans = jsum - jmn;
            ans += gmx;
        } else {
            ans = jsum;
        }
        if (k == 2) {
            ans -= (max (jmx, gmx));
            ans += min (jmn, gmn);
        } else if (k > 2) {
            if (k % 2 == 0) {
                ans -= (max (jmx, gmx));
                ans += min (jmn, gmn);
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}