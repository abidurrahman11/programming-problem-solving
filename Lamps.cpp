// Codeforces Problem: B - Lamps
// Link: https://codeforces.com/contest/1839/problem/B
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
#include<vector>
#include<map>
#include<algorithm>
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
        map <int, vector <int>> mp;
        int n;
        ll ans = 0;
        cin>>n;
        while (n--) {
            int a, b;
            cin>>a>>b;
            mp[a].push_back (b);
        }
        for (auto p: mp) {
            int sz = p.second.size ();
            int maxi = min (p.first, sz);
            sort (p.second.begin (), p.second.end (), greater <int> ());
            for (int i = 0; i < maxi; i++) {
                ans += p.second[i];
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}