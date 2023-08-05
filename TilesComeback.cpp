// Codeforces Problem: C - Tiles Comeback
// Link: https://codeforces.com/contest/1851/problem/C
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

void solve () {
    int n, k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int n1 = 0, n2 = 0;
    if (arr[0] == arr[n - 1]) {
        for (int i = 0; i < n; i++) {
            if (arr[0] == arr[i]) {
                n1++;
            }
        }
        if (n1 >= k) {
            cout<<"YES\n";
            return;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[0] == arr[i] && n1 < k) {
            n1++;
        } else if (n1 == k && arr[n - 1] == arr[i]) {
            n2++;
        }
    }
    if (n1 >= k && n2 >= k) {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        solve ();
    }
    return 0;
}