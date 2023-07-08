// Codeforces Problem: 1520D - Same Differences
// Link: https://codeforces.com/problemset/problem/1520/D
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
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        int n;
        ll cnt = 0;
        cin>>n;
        map <int, int> mp;
        for (int i = 1; i <= n; i++) {
            int a;
            cin>>a;
            cnt += mp[a - i];
            mp[a - i]++;
        }
        cout<<cnt<<nl;
    }
    return 0;
}