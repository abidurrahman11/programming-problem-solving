#include<iostream>
// #include<bits/stdc++.h>
#include<set>
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
    int t;
    cin>>t;
    while (t--) {
        int x, y, n;
        cin>>x>>y>>n;
        int dif = 1, first = x;
        set <int> st;
        for (int i = 0; i < n - 1; i++) {
            if (y - dif < first) {
                first = -1;
                break;
            }
            st.insert (y);
            y -= dif;
            dif++;
        }
        if (first == -1) {
            cout<<first<<nl;
        } else {
            cout<<first<<ws;
            for (auto e: st) {
                cout<<e<<ws;
            }
            cout<<nl;
        }
    }
    return 0;
}