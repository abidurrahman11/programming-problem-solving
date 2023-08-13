// Codeforces Problem: 1364A - XXXXX
// Link: https://codeforces.com/problemset/problem/1364/A
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
        int n, x;
        cin>>n>>x;
        int arr[n], pref[n], cur = 0;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            cur += arr[i];
            pref[i] = cur;
        }
        int ans = -1;
        if (pref[n - 1] % x != 0) {
            ans = n;
        } else {
            for (int i = 0; i < n - 1; i++) {
                if ((pref[n - 1] - pref[i]) % x != 0) {
                    ans = max (ans, n - (i + 1));
                }
            }
            for (int i = n - 2; i >= 0; i--) {
                if (pref[i] % x != 0) {
                    ans = max (ans, i + 1);
                }
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}