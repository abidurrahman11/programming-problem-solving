#include<bits/stdc++.h>
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
        ll n, m;
        cin>>n>>m;
        ll x = 10, ans = 0;
        while (1) {
            ll g = __gcd (x, n);
            ll k = x / g;
            if (k <= m) {
                ans = n * k * (m / k);
            } else {
                break;
            }
            x *= 10;
        }
        if (ans) {
            cout<<ans<<nl;
        } else {
            cout<<n * m<<nl;
        }
    }
    return 0;
}