// Codeforces Problem: 1795C - Tea Tasting
// Link: https://codeforces.com/problemset/problem/1795/C
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
        int n;
        cin>>n;
        int a[n + 1], b[n + 1];
        ll pref[n + 1] = {0}, count[n + 2] = {0}, add[n + 1] = {0}, ans[n + 1] = {0};
        for (int i = 1; i <= n; i++) cin>>a[i];
        for (int i = 1; i <= n; i++) cin>>b[i];
        for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + b[i];
        for (int i = 1; i <= n; i++) {
            if (a[i] >= pref[n] - pref[i - 1]) {
                count[i]++;
                count[n + 1]--;
                continue;
            }
            int idx = -1, l = i, r = n;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (a[i] >= pref[mid] - pref[i - 1]) {
                    idx = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            if (idx == -1) {
                add[i] += a[i];
            } else {
                count[i]++;
                count[idx + 1]--;
                ll ext = a[i] - (pref[idx] - pref[i - 1]);
                if (idx + 1 <= n) {
                    add[idx + 1] += ext;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            count[i] += count[i -1];
        }
        for (int i = 1; i <= n; i++) {
            ans[i] = add[i] + count[i] * b[i];
        }
        for (int i = 1; i <= n; i++) {
            cout<<ans[i]<<ws;
        }
        cout<<nl;
    }
    return 0;
}