// Codeforces Problem: B - Ten Words of Wisdom
// Link: https://codeforces.com/contest/1850/problem/B
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
        int n;
        cin>>n;
        int ans = 0, mx = 0;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin>>a>>b;
            if (a <= 10 && b > mx) {
                mx = b;
                ans = i + 1;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}