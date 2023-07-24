// Codeforces Problem: 1512D - Corrupted Array
// Link: https://codeforces.com/problemset/problem/1512/D
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
        n += 2;
        int arr[n];
        ll b = 0;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            b += arr[i];
        }
        sort (arr, arr + n);
        b -= arr[n - 1];
        int idx = -1;
        for (int i = 0; i < n - 1; i++) {
            if (b - arr[i] == arr[n - 1]) {
                idx = i;
                break;
            }
        }
        if (b - arr[n - 2] == arr[n - 2]) {
            idx = n - 2;
        }
        if (idx != -1) {
            for (int i = 0; i < n - 1; i++) {
                if (i != idx) {
                    cout<<arr[i]<<ws;
                }
            }
            cout<<nl;
        } else {
            cout<<-1<<nl;
        }
    }
    return 0;
}