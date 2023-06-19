// Codeforces Problem: B - Maximum Strength
// Link: https://codeforces.com/contest/1834/problem/B
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
        string s1, s2;
        cin>>s2>>s1;
        while (s2.size () != s1.size ()) {
            s2 = '0' + s2;
        }
        ll ans = 0;
        bool flag = false;
        for (int i = 0; i < s1.size (); i++) {
            if (flag) {
                ans += 9;
            }
            if (!flag && s1[i] != s2[i]) {
                ans += abs (s1[i] - s2[i]);
                flag = true;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}