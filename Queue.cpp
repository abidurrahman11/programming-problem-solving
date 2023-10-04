#include<iostream>
// #include<bits/stdc++.h>
#include<set>
// #include<vector>
#include<map>
// #include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

int main () {
    FASTIO
    int n, a, b;
    cin>>n;
    map <int, int> mp;
    set <int> st, st2;
    int ans[n + 1];
    for (int i = 0; i < n; i++) {
        cin>>a>>b;
        mp[a] = b;
        if (a == 0) {
            ans[2] = b;
        }
        st.emplace (a);
        st2.emplace (b);
    }
    for (auto e : st) {
        if (st2.find (e) == st2.end ()) {
            ans[1] = e;
            break;
        }
    }
    for (int i = 3; i <= n; i++) {
        ans[i] = mp[ans[i - 2]];
    }
    for (int i = 1; i <= n; i++) {
        cout<<ans[i]<<ws;
    }
    return 0;
}