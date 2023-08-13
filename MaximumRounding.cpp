// Codeforces Problem: 1857B - Maximum Rounding
// Link: https://codeforces.com/problemset/problem/1857/B
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
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int len = s.length ();
        int pos = len;
        for (int i = len - 1; i >= 0; i--) {
            if (s[i] - '0' >= 5) {
                int idx = i - 1;
                while (idx > -1 && s[idx] == '9') {
                    idx--;
                }
                if (idx == -1) {
                    s = '1' + s;
                    pos = 1;
                    break;
                } else {
                    pos = idx + 1;
                    s[idx]++;
                    i = idx + 1;
                }
            }
        }
        for (int i = pos; i <= len; i++) {
            s[i] = '0';
        }
        cout<<s<<nl;
    }
    return 0;
}