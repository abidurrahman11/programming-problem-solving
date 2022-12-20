// Codeforces Problem: Less or Equal
// Link: https://codeforces.com/problemset/problem/977/C
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main () {
    ll n, k;
    cin>>n>>k;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort (arr, arr + n);
    int ans, occr = 0;
    if (k == 0) {
        ans = arr[0] - 1;
    } else {
        ans = arr[k - 1];
    }
    for (ll i = 0; i < n; i++) {
        if (arr[i] <= ans) {
            occr++;
        }
    }
    if (ans < 1 || occr != k) {
        cout<<-1;
    } else {
        cout<<ans;
    }
    return 0;
}