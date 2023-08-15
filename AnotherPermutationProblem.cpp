// Codeforces Problem: C - Another Permutation Problem
// Link: https://codeforces.com/contest/1859/problem/C
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// #include<vector>
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
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            int cur = 0, arr2[n], mx = 0;
            for (int j = 0; j < n; j++) {
                arr2[j] = arr[j];
            }
            reverse (arr2 + i, arr2 + n);
            for (int j = 0; j < n; j++) {
                cur += arr2[j] * (j + 1);
                mx = max (mx, arr2[j] * (j + 1));
            }
            ans = max (ans, cur - mx);
        }
        cout<<ans<<nl;
    }
    return 0;
}