// Codeforces Problem: A - Sasha and Array Coloring
// Link: https://codeforces.com/contest/1843/problem/A
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
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort (arr, arr + n);
        int l = 0, r = n - 1, ans = 0;
        while (l < r) {
            ans += arr[r] - arr[l];
            l++, r--;
        }
        cout<<ans<<nl;
    }
    return 0;
}