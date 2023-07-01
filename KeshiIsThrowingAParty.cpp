// Codeforces Problem: 1610C - Keshi Is Throwing a Party
// Link: https://codeforces.com/problemset/problem/1610/C
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
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        int n, ans = 0;
        cin>>n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin>>a[i]>>b[i];
        }
        int l = 1, r = n;
        while (l <= r) {
            int mid = (l + r) / 2;
            int added = 0;
            for (int i = 0; i < n; i++) {
                if (b[i] >= added && a[i] >= mid - added - 1) {
                    added++;
                }
                if (added == mid) {
                    break;
                }
            }
            if (added == mid) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}