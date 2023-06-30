// Codeforces Problem: D - Odd Queries
// Link: https://codeforces.com/contest/1807/problem/D
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
        int n, q;
        cin>>n>>q;
        int arr[n + 1], cSum[n + 1], com = 0;
        for (int i = 1; i <= n; i++) {
            cin>>arr[i];
            com += arr[i];
            cSum[i] = com;
        }
        while (q--) {
            int l, r, k;
            cin>>l>>r>>k;
            int sum = (r - l + 1) * k;
            if (l - 1 > 0) {
                sum += cSum[l - 1];
            }
            if (n - r > 0) {
                sum += (cSum[n] - cSum[r]);
            }
            if (sum & 1) {
                cout<<"YES\n";
            } else {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}