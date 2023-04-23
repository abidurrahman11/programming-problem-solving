// Codeforces Problem: C - Letters
// Link: https://codeforces.com/contest/978/problem/C
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

#define ll long long

int main () {
    int n, m;
    cin>>n>>m;
    ll arr[n + 1], cSum[n + 1];
    ll sum = 0;
    for (ll i = 1; i <= n; i++) {
        cin>>arr[i];
        sum += arr[i];
        cSum[i] = sum;
    }
    ll x, idx = 1, temp = cSum[1];
    for (ll i = 1; i <= m; i++) {
        cin>>x;
        while (cSum[idx] < x) {
            idx++;
        }
        ll room;
        if (idx == 1) {
            room = x;
        } else {
            room = x - cSum[idx - 1];
        }
        if (room == 0) {
            room = arr[idx];
        }
        cout<<idx<<" "<<room<<"\n";
    }
    return 0;
}