// Codeforces Problem: C - Make Them Equal
// Link: https://codeforces.com/contest/1594/problem/C
// Status: Accepted      Language: C++

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
        int n;
        char c;
        string s;
        cin>>n>>c>>s;
        int fi = -1, li = 0, cnt = 0, lc = 0;
        for (int i = 0; i < n; i++) {
            if (fi == -1 &&  s[i] != c) {
                fi = i;
            }
            if (s[i] != c) {
                li = i;
                cnt++;
            }
            if (s[i] == c) {
                lc = i;
            }
        }
        if (cnt == 0) {
            cout<<0<<nl;
        } else if (cnt == 1) {
            if (li == 0) {
                cout<<1<<nl<<2<<nl;
            } else if (li == n - 1) {
                cout<<1<<nl<<n - 1<<nl;
            } else {
                cout<<1<<nl<<n<<nl;
            }
        } else if ((lc + 1) * 2 > li + 1) {
            cout<<1<<nl<<lc + 1<<nl;
        } else if (fi && fi * 2 > li + 1) {
            cout<<1<<nl<<fi<<nl;
        } else {
            if (s[n - 1] == c) {
                cout<<1<<nl<<n<<nl;
            } else {
                cout<<2<<nl<<n - 1<<ws<<n<<nl;
            }
        }
    }
    return 0;
}