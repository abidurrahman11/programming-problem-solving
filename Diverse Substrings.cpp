#include<bits/stdc++.h>
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            set <char> st;
            map <char, int> mp;
            int mx = 0;
            for (int j = i; j < (int) s.size () && (mp[s[j]]++) <= 10; j++) {
                st.insert (s[j]);
                mx = max (mp[s[j]], mx);
                if ((int) st.size () >= mx) {
                    ans++;
                }
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}