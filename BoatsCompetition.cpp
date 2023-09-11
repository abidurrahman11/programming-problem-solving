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
        int n, a;
        cin>>n;
        int arr[n + 1] = {0};
        for (int i = 0; i < n; i++) {
            cin>>a;
            arr[a]++;
        }
        int ans = 0;
        for (int i = 1; i <= 2 * n; i++) {
            int cur = 0;
            for (int j = 1; j < (i + 1) / 2; j++) {
                if (i - j <= n) {
                    cur += min (arr[j], arr[i - j]);
                }
            }
            if (!(i & 1)) {
                cur += arr[i / 2] / 2;
            }
            ans = max (cur, ans);
        }
        cout<<ans<<nl;
    }
    return 0;
}