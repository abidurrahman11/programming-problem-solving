// Codeforces Problem: https://codeforces.com/problemset/problem/1613/C
// Link: https://codeforces.com/problemset/problem/1613/C
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
        ll h;
        cin>>n>>h;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        ll l = 0, r = 1e18, ans = 0;
        while (l <= r) {
            ll mid = (l + r) / 2;
            ll cur = 0;
            for (int i = 0; i < n; i++) {
                if (i != n - 1 && arr[i] + mid >= arr[i + 1]) {
                    cur += arr[i + 1] - arr[i];
                } else {
                    cur += mid;
                }
                if (cur > h) {
                    break;
                }
            }
            if (cur == h) {
                ans = mid;
                break;
            } else if (cur > h) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}