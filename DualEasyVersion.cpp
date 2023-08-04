// Codeforces Problem: 1855C1 - Dual (Easy Version)
// Link: https://codeforces.com/problemset/problem/1855/C1
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
#include<vector>
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
        int arr[n], mn = 1e5, mx = 0;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] < mn) {
                mn = arr[i];
            }
            if (arr[i] > mx) {
                mx = arr[i];
            }
        }
        if (n == 1) {
            cout<<0<<nl;
            continue;
        }
        vector <pair <int, int>> mov;
        if (mx <= 0) {
            for (int i = n - 2; i >= 0; i--) {
                mov.emplace_back (i, i + 1);
            }
        } else if (mn >= 0) {
            for (int i = 0; i < n - 1; i++) {
                mov.emplace_back (i + 1, i);
            }
        } else {
            int pos = 0;
            while (arr[pos] <= 0) {
                pos++;
            }
            for (int i = 0; i < 5; i++) {
                mov.emplace_back (pos, pos);
            }
            for (int i = 0; i < n; i++) {
                if (arr[i] < 0) {
                    mov.emplace_back (i, pos);
                }
            }
            for (int i = 0; i < n - 1; i++) {
                mov.emplace_back (i + 1, i);
            }
        }
        cout<<mov.size ()<<nl;
        for (auto p : mov) {
            cout<<p.first + 1<<ws<<p.second + 1<<nl;
        }
    }
    return 0;
}