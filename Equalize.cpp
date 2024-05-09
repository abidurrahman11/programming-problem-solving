#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

typedef vector<ll> vi;
typedef vector<pair<ll, ll>> vii;

int main () {
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vi v (n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        sort (v.begin (), v.end ());
        int m = unique (v.begin (), v.end ()) - v.begin ();
        int id = 0, ans = 0;
        for (int i = 0; i < m; i++) {
            while (v[i] - v[id] >= n) {
                id++;
            }
            ans = max (ans, i - id + 1);
        }
        cout<<ans<<nl;
    }
    return 0;
}