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
        int n, a, q;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        int on = 0, of = 0;
        string ans = "NO";
        if (a >= n) {
            cout<<"YES\n";
            continue;
        }
        for (int i = 0; i < q; i++) {
            if (s[i] == '+') {
                on++;
            } else {
                of++;
            }
            if (a + on >= n && a + (on - of) >= n) {
                ans = "YES";
                break;
            } else if (a + on >= n && a + (on - of) < n) {
                ans = "MAYBE";
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}