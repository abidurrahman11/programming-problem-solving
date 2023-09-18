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
        int n;
        string s;
        cin>>n>>s;
        int fix = 0;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1]) {
                fix++;
            }
        }
        vector <int> v (n + 1, 0);
        if (n & 1) {
            for (int i = fix; i <= n - fix; i++) {
                v[i] = 1;
            }
        }
        if (n % 2 == 0) {
            for (int i = fix; i <= n - fix; i += 2) {
                v[i] = 1;
            }
        }
        for (auto e: v) {
            cout<<e;
        }
        cout<<nl;
    }
    return 0;
}