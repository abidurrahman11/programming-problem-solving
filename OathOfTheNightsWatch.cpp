// Codeforces Problem: 768A - Oath of the Night's Watch
// Link: https://codeforces.com/problemset/problem/768/A
// Status: Accepted      Language: C++

#include<iostream>
#include<algorithm>
using namespace std;

#define ll long long

int main () {
    ll n, count = 0;
    cin>>n;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort (arr, arr + n);
    if (arr[0] == arr[n - 1]) {
        cout<<0;
        return 0;
    }
    for (ll i = 0; i < n; i++) {
        if (arr[i] == arr[0] || arr[i] == arr[n - 1]) {
            count++;
        }
    }
    cout<<n - count;
    return 0;
}