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
        int n, m;
        cin>>n>>m;
        ll arr[n], arr2[m];
        ll mx = 0;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (int i = 0; i < m; i++) {
            cin>>arr2[i];
            mx |= arr2[i];
        }
        ll a1 = 0, a2 = 1e18;
        ll tmp = arr[0];
        for (int i = 1; i < n; i++) {
            tmp ^= arr[i];
        }
        a1 = max (a1, tmp);
        a2 = min (a2,tmp);
        for (int i = 0; i < n; i++) {
            arr[i] |= mx;
        }
        ll tmp2 = arr[0];
        for (int i = 1; i < n; i++) {
            tmp2 ^= arr[i];
        }
        a1 = max (tmp2, a1);
        a2 = min (tmp2, a2);
        cout<<a2<<ws<<a1<<nl;
    }
    return 0;
}