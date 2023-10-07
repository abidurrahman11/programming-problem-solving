#include<bits/stdc++.h>
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
        int n, m, x, y;
        cin>>n>>m;
        int arr[n + 2] = {0};
        for (int i = 0; i < m; i++) {
            cin>>x>>y;
            if (x > y) {
                swap (x, y);
            }
            arr[y] = max (arr[y], x);
        }
        ll ans = 0;
        int cur = 1;
        for (int i = 1; i <= n; i++) {
            cur = max (cur, arr[i] + 1);
            ans += (i - cur + 1);
        }
        cout<<ans<<nl;
    }
    return 0;
}