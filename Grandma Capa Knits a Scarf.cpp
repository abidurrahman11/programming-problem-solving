#include<iostream>
// #include<bits/stdc++.h>
#include<set>
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
        string s;
        cin>>n>>s;
        set <char> st;
        for (int i = 0; i < n; i++) {
            st.emplace (s[i]);
        }
        int ans = MOD;
        bool f = false;
        if (n == 1) {
            cout<<0<<nl;
            continue;
        }
        for (auto e: st) {
            int l = 0, r = n - 1;
            int cut = 0;
            while (l < r) {
                if (s[l] == s[r]) {
                    if (l + 1 == r || r - 1 == l || l == r || l + 1 == r - 1) {
                        ans = min (cut, ans);
                        f = true;
                    }
                    l++;
                    r--;
                } else {
                    if (s[l] == e) {
                        l++;
                        cut++;
                        if (l == r) {
                            ans = min (cut, ans);
                            f = true;
                        }
                    } else if (s[r] == e) {
                        r--;
                        cut++;
                        if (l == r) {
                            ans = min (cut, ans);
                            f = true;
                        }
                    } else {
                        break;
                    }
                }
            }
        }
        if (f) {
            cout<<ans<<nl;
        } else {
            cout<<-1<<nl;
        }
    }
    return 0;
}