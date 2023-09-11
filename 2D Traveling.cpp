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
#define MOD 1000000007

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, k, a, b;
        cin>>n>>k>>a>>b;
        vector <pair<ll, ll>> v (n + 1);
        for (int i = 1; i <= n; i++) {
            cin>>v[i].first>>v[i].second;
        }
        // for (auto e: v) {
        //     cout<<e.first<<ws<<e.second<<nl;
        // }
        ll a1 = abs (v[a].first - v[b].first) + abs (v[a].second - v[b].second);
        ll a2 = 1e15, a3 = 1e15;
        for (int i = 1; i <= k; i++) {
            a2 = min (a2, (abs (v[a].first - v[i].first) + abs (v[a].second - v[i].second)));
        }
        for (int i = 1; i <= k; i++) {
            a3 = min (a3, (abs (v[b].first - v[i].first) + abs (v[b].second - v[i].second)));
        }
        cout<<min (a1, a2 + a3)<<nl;
    }
    return 0;
}