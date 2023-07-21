// Codeforces Problem: C - Word on the Paper
// Link: https://codeforces.com/contest/1850/problem/C
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
        string ans = "";
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                char a;
                cin>>a;
                if (a != '.') {
                    ans += a;
                }
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}