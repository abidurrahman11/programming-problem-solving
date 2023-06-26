// Codeforces Problem: C - Chat Ban
// Link: https://codeforces.com/contest/1612/problem/C
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

ll sum (ll num) {
    return num * (num + 1) / 2;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        ll k, x;
        cin>>k>>x;
        ll l = 1, tot = 2 * k - 1, r = 2 * k - 1;
        bool big = false;
        while (l <= r) {
            ll mid = (l + r) >> 1;
            if (mid >= k) {
                if (sum (k) + sum (k - 1) - sum (2 * k - 1 - mid) >= x) {
                    big = true;
                } else {
                    big = false;
                }
            } else {
                if (sum (mid) >= x) {
                    big = true;
                } else {
                    big = false;
                }
            }
            if (big) {
                tot = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout<<tot<<nl;
    }
    return 0;
}