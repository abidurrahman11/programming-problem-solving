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
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        int mx = MOD, mn = 0;
        for (int i = 0; i < n - 1; i++) {
            int p1 = arr[i], p2 = arr[i + 1];
            int l = (p1 + p2) / 2;
            int r = (p1 + p2 + 1) / 2;
            if (p1 < p2) {
                mx = min (mx, l);
            } else if (p1 > p2) {
                mn = max (mn, r);
            }
        }
        if (mn <= mx) {
            cout<<mn<<nl;
        } else {
            cout<<-1<<nl;
        }
    }
    return 0;
}