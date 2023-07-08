// Codeforces Problem: 1541B - Pleasant Pairs
// Link: https://codeforces.com/problemset/problem/1541/B
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
        vector <pair <int, int>> v (n);
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            cin>>v[i].first;
            v[i].second = i + 1;
        }
        sort (v.begin (), v.end ());
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n;  j++) {
                if (1LL * v[i].first * v[j].first >= 2 * n) {
                    break;
                }
                if (1LL * v[i].first * v[j].first == v[i].second + v[j].second) {
                    cnt++;
                }
            }
        }
        cout<<cnt<<nl;
    }
    return 0;
}