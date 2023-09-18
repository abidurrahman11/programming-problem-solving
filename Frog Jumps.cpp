#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
#include<vector>
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
        string s;
        cin>>s;
        int n = s.length ();
        vector <int> v;
        v.push_back (0);
        for (int i = 0; i < n; i++) {
            if (s[i] == 'R') {
                v.push_back (i + 1);
            }
        }
        v.push_back (n + 1);
        int ans = 0, sz = v.size ();
        for (int i = 1; i < sz; i++) {
            ans = max (ans, v[i] - v[i - 1]);
        }
        cout<<ans<<nl;
    }
    return 0;
}