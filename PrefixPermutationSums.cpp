// Codeforces Problem: 1851D - Prefix Permutation Sums
// Link: https://codeforces.com/problemset/problem/1851/D
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
#include<set>
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
        ll arr[n - 1];
        for (int i = 0; i < n - 1; i++) {
            cin>>arr[i];
        }
        set <int> found;
        for (int i = n - 2; i >= 0; i--) {
            if (i && arr[i] - arr[i - 1] <= n) {
                found.emplace (arr[i] - arr[i - 1]);
            } else if (arr[i] <= n) {
                found.emplace (arr[i]);
            }
        }
        if (found.size () == n - 1) {
            cout<<"YES\n";
        } else if (found.size () == n - 2 && arr[n - 2] == 1LL * n * (n + 1) / 2) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}