#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

int main () {
    // FASTIO
    int n;
    cin>>n;
    string s;
    map <ll, ll> mp;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin>>s;
        ll mask = 0;
        for (int i = 0; i < s.length (); i++) {
            ll val = s[i] - 'a';
            mask ^= (1 << val);
        }
        ans += mp[mask];
        for (int j = 0; j < 26; j++) {
            mask ^= (1 << j);
            ans += mp[mask];
            mask ^= (1 << j);
        }
        mp[mask]++;
    }
    cout<<ans<<nl;
    return 0;
}