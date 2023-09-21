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
        int arr[n + 1];
        ll pref[n + 1] = {0};
        for (int i = 1; i <= n; i++) {
            cin>>arr[i];
            pref[i] = pref[i - 1] + arr[i];
        }
        int l = 1, r = n, ans;
        while (l <= r) {
            int mid = (l + r) / 2;
            cout<<"? "<<mid - l + 1<<ws;
            for (int i = l; i <= mid; i++) {
                cout<<i<<ws;
            }
            cout<<nl;
            ll rep;
            cin>>rep;
            if (rep == pref[mid] - pref[l - 1]) {
                l = mid + 1;
            } else {
                r = mid - 1;
                ans = mid;
            }
        }
        cout<<"! "<<ans<<nl;
    }
    return 0;
}