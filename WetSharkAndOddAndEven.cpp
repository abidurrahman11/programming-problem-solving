// Codeforces Problem: 621A - Wet Shark and Odd and Even
// Link: https://codeforces.com/problemset/problem/621/A
// Status: Accepted      Language: C++

#include<iostream>
#include<vector>
using namespace std;

#define ll long long

int main () {
    int n;
    cin>>n;
    vector <ll> even, odd;
    for (int i = 0; i < n; i++) {
        ll x;
        cin>>x;
        if (x & 1) {
            odd.push_back(x);
        } else {
            even.push_back(x);
        }
    }
    ll evenSum = 0, oddSum = 0, mini = __LONG_LONG_MAX__;
    for (ll a: even) {
        evenSum += a;
    }
    for (ll a: odd) {
        oddSum += a;
        mini = min (mini, a);
    }
    if (odd.size() % 2 == 0) {
        cout<<evenSum + oddSum;
    } else {
        cout<<(evenSum + oddSum) - mini;
    }
    return 0;
}