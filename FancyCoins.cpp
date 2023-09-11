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
        ll m, k, a1, ak, ans;
        cin>>m>>k>>a1>>ak;
        if (m - (k * ak) < 0) {
            m %= k;
        } else {
            m -= k * ak;
        }
        m -= a1;
        if (m <= 0) {
            ans = 0;
        } else {
            ans = m / k;
            int ext = m % k;
            int need = 1e9;
            if (ext != 0) {
                need = k - ext;
            }
            if (need <= a1) {
                ans += 1;
            } else {
                ans += ext;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}