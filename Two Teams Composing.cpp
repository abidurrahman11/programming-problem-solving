// Codeforces Problem: C - Two Teams Composing
// Link: https://codeforces.com/contest/1335/problem/C
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
#include<set>
//#include<vector>
#include<map>
//#include<algorithm>
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
        map <int, int> mp;
        set <int> st;
        int n, x, mxF = 0;
        cin>>n;
        for (int i = 0; i < n; i++) {
            cin>>x;
            mp[x]++;
            st.insert (x);
        }
        for (auto v: mp) {
            mxF = max (mxF, v.second);
        }
        int unq = st.size ();
        if (unq == mxF) {
            cout<<unq - 1<<nl;
        } else if (unq < mxF) {
            cout<<unq<<nl;
        } else {
            cout<<mxF<<nl;
        }
    }
    return 0;
}