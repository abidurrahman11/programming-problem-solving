// Codeforces Problem: 1859B - Olya and Game with Arrays
// Link: https://codeforces.com/problemset/problem/1859/B
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
#include<vector>
// #include<map>
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
        int n;
        cin>>n;
        vector <pair <int, int>> v;
        vector <int> v2;
        for (int i = 0; i < n; i++) {
            int m;
            cin>>m;
            int arr[m];
            for (int i = 0; i < m; i++) {
                cin>>arr[i]; 
            }
            sort (arr, arr + m);
            v.emplace_back (arr[0], arr[1]);
        }
        ll ans = 0;
        int mn = MOD;
        for (auto p: v) {
            v2.push_back (p.second);
            if (p.first < mn) {
                mn = p.first;
            }
        }
        sort (v2.begin (), v2.end ());
        for (int i = 1; i < v.size (); i++) {
            ans += v2[i];
        }
        ans += mn;
        cout<<ans<<nl;
    }
    return 0;
}