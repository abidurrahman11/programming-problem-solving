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
        int n;
        cin>>n;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ll d, s;
            cin>>d>>s;
            ll cur = d + ((s + 1) / 2);
            if (i == 0) {
                ans = cur;
            } else {
                ans = min (ans, cur);
            }
        }
        cout<<ans - 1<<nl;
    }
    return 0;
}