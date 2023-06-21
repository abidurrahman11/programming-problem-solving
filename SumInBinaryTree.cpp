// Codeforces Problem: C - Sum in Binary Tree
// Link: https://codeforces.com/contest/1843/problem/C
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
        ll n;
        cin>>n;
        ll ans = n;
        while (n) {
            ans += n / 2;
            n /= 2;
        }
        cout<<ans<<nl;
    }
    return 0;
}