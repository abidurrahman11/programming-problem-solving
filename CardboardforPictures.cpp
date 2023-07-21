// Codeforces Problem: E - Cardboard for Pictures
// Link: https://codeforces.com/contest/1850/problem/E
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
        ll c;
        cin>>n>>c;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        ll l = 0, r = MOD, ans = 0;
        while (l <= r) {
            ll mid = (l + r) / 2;
            ll cur = 0;
            for (int i = 0; i < n; i++) {
                cur += (arr[i] + (mid * 2)) * (arr[i] + (mid * 2));
                if (cur > c) {
                    break;
                }
            }
            if (cur == c) {
                ans = mid;
                break;
            } else if (cur < c) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}