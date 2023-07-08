// Codeforces Problem: 1537C - Challenging Cliffs
// Link: https://codeforces.com/problemset/problem/1537/C
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
        sort (arr, arr + n, greater <int> ());
        if (n == 2) {
            cout<<arr[1]<<ws<<arr[0]<<nl;
            continue;
        }
        int idx, mn = MOD;
        for (int i = 0; i < n - 1; i++) {
            if (abs (arr[i] - arr[i + 1]) < mn) {
                mn = abs (arr[i] - arr[i + 1]);
                idx = i;
            }
        }
        for (int i = idx; i >= 0; i--) {
            cout<<arr[i]<<ws;
        }
        for (int i = n - 1; i > idx; i--) {
            cout<<arr[i]<<ws;
        }
        cout<<nl;
    }
    return 0;
}