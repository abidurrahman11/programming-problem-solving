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
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        int n, k, x;
        cin>>n>>k>>x;
        ll ans = 0;
        bool mxf = false;
        int cur = 0;
        while (n != 0) {
            if (cur == k) {
                mxf = true;
                if (cur != x) {
                    cur = x;
                } else {
                    cur--;
                }
            }
            if (cur > x) {
                break;
            }
            ans += cur;
            if (!mxf) {
                cur++;
            }
            n--;
        }
        if (mxf || cur == k) {
            cout<<ans<<nl;
        } else {
            cout<<-1<<nl;
        }
    }
    return 0;
}