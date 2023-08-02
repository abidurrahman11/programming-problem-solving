// Codeforces Problem: B - Hemose Shopping
// Link: https://codeforces.com/contest/1592/problem/B
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
        int n, x;
        cin>>n>>x;
        int arr[n], arr2[n];
        bool sorted = true;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            arr2[i] = arr[i];
            if (i && arr[i] < arr[i - 1]) {
                sorted = false;
            }
        }
        if (sorted) {
            cout<<"YES\n";
        } else if (2 * x <= n) {
            cout<<"YES\n";
        } else {
            bool ok = true;
            sort (arr2, arr2 + n);
            for (int i = n - x; i < x; i++) {
                if (arr[i] != arr2[i]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                cout<<"YES\n";
            } else {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}