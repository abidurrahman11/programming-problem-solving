// Codeforces Problem: D - Balanced Round
// Link: https://codeforces.com/contest/1850/problem/D
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
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
        int n, k, mx = 1, ans = 0;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        if (n == 1) {
            cout<<0<<nl;
            continue;
        }
        sort (arr, arr + n);
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] <= k) {
                mx++;
            } else {
                ans = max (mx, ans);
                mx = 1;
            }
        }
        ans = max (mx, ans);
        cout<<n - ans<<nl;
    }
    return 0;
}