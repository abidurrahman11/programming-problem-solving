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
        cin>>n;
        set <int> uni;
        set <set <int>> st;
        for (int i = 0; i < n; i++) {
            int k;
            cin>>k;
            set <int> tmp;
            while (k--) {
                int a;
                cin>>a;
                tmp.insert (a);
            }
            st.insert (tmp);
            uni.insert (tmp.begin (), tmp.end ());
        }
        int mx = 0;
        for (auto x: uni) {
            set <int> tmp2;
            for (auto s: st) {
                bool f = false;
                for (auto e: s) {
                    if (x == e) {
                        f = true;
                        break;
                    }
                }
                if (!f) {
                    tmp2.insert (s.begin (), s.end ());
                }
            }
            mx = max (mx, (int) tmp2.size ());
        }
        cout<<mx<<nl;
    }
    return 0;
}