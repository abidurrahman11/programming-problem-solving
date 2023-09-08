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
        string ans (m, 0);
        for (int i = 0; i < n + n - 1; i++) {
            string s;
            cin>>s;
            for (int j = 0; j < m; j++) {
                if (i < n) {
                    ans[j] += s[j];
                } else {
                    ans[j] -= s[j];
                }
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}