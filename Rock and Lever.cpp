#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

typedef vector<int> vi;
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
        vi cnt (32, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 31; j >= 0; j--) {
                if (v[i] & (1<<j)) {
                    cnt[j]++;
                    break;
                }
            }
        }
        ll ans = 0;
        for (int i = 0; i < 32; i++) {
            ans += (1LL * cnt[i] * (cnt[i] - 1)) / 2LL;
        }
        cout<<ans<<nl;
    }
    return 0;
}