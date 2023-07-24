// Codeforces Problem: 1472D - Even-Odd Game
// Link: https://codeforces.com/problemset/problem/1472/D
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
        ll ali = 0, bob = 0;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort (arr, arr + n, greater <int> ());
        for (int i = 0; i < n; i++) {
            if (i & 1) {
                if (arr[i] & 1) {
                    bob += arr[i];
                }
            } else {
                if (!(arr[i] & 1)) {
                    ali += arr[i];
                }
            }
        }
        if (ali == bob) {
            cout<<"Tie\n";
        } else if (ali > bob) {
            cout<<"Alice\n";
        } else {
            cout<<"Bob\n";
        }
    }
    return 0;
}