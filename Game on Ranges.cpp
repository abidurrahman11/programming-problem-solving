// #include<iostream>
#include<bits/stdc++.h>
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
        int l[n], r[n];
        int mark[n + 1][n + 1];
        memset (mark, 0, sizeof (mark));
        for (int i = 0; i < n; i++) {
            cin>>l[i]>>r[i];
            mark[l[i]][r[i]] = 1;
        }
        for (int i = 0; i < n; i++) {
            for (int j = l[i]; j <= r[i]; j++) {
                if ((mark[l[i]][j - 1] || j == l[i]) && (mark[j + 1][r[i]] || j == r[i])) {
                    cout<<l[i]<<ws<<r[i]<<ws<<j<<nl;
                    break;
                }
            }
        }
    }
    return 0;
}