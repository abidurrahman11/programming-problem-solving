// Codeforces Problem: C - Delete Two Elements
// Link: https://codeforces.com/contest/1598/problem/C
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// #include<vector>
#include<map>
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
        map <int, int> mp;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            mp[arr[i]]++;
            sum += arr[i];
        }
        if ((sum * 2) % n != 0) {
            cout<<0<<nl;
            continue;
        }
        ll tot = (sum * 2) / n, ans = 0;
        for (int i = 0; i < n; i++) {
            int a = tot - arr[i];
            if (mp.count (a)) {
                ans += mp[a];
            }
            if (arr[i] == a) {
                ans -= 1;
            }
        }
        cout<<ans / 2<<nl;
    }
    return 0;
}