// Codeforces Problem: 1539C - Stable Groups
// Link: https://codeforces.com/problemset/problem/1539/C
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
    int n;
    ll k, x;
    cin>>n>>k>>x;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort (arr, arr + n);
    vector <ll> v;
    for (int i = 0; i < n - 1; i++) {
        v.push_back (abs (arr[i] - arr[ i + 1]));
    }
    ll cnt = 0, grp = 1;
    sort (v.begin (), v.end ());
    for (auto e: v) {
        while (e > x) {
            if (cnt >= k) {
                grp++;
                break;
            }
            if (e / x == 1) {
                cnt++;
                break;
            }
            if ((e / x > 1) && (e % x == 0)) {
                cnt += (e / x) - 1;
                if (cnt > k) {
                    grp++;
                }
                break;
            } else if ((e / x > 1) && (e % x)) {
                cnt += (e / x);
                if (cnt > k) {
                    grp++;
                }
                break;
            }
        }
    }
    cout<<grp<<nl;
    return 0;
}