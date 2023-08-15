// Codeforces Problem: B - Flip the Bits
// Link: https://codeforces.com/contest/1504/problem/B
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
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;
        string ans = "YES";
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s1[i] == '1') {
                count++;
            } else {
                count--;
            }
            if((s1[i] == s2[i] && s1[i + 1] != s2[i + 1] || s1[i] != s2[i] && s1[i + 1] == s2[i + 1]) && count != 0) {
                ans = "NO";
                break;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}