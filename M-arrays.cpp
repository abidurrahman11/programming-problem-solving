// Codeforces Problem: 1497B - M-arrays
// Link: https://codeforces.com/problemset/problem/1497/B
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
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
    int t;
    cin>>t;
    while (t--) {
        int n, m, a, ans = 0;
        cin>>n>>m;
        map <int, int> mp;
        for (int i = 0; i < n; i++) {
            cin>>a;
            mp[a % m]++;
        }
        for (auto e : mp) {
            if (e.first == 0) {
                ans++;
            } else if (e.first == m - e.first) {
                ans++;
            } else if (mp.count (m - e.first) == 0) {
                ans += e.second;
            } else if (e.first <= m - e.first) {
                int n1 = e.second;
                int n2 = mp[m - e.first];
                if (abs (n1 - n2) < 2) {
                    ans++;
                } else if (n1 > n2) {
                    ans += 1 + (n1 - (n2 + 1));
                } else {
                    ans += 1 + (n2 - (n1 + 1));
                }
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}