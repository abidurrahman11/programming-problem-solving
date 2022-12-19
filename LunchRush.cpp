// Codeforces Problem: Lunch Rush
// Link: https://codeforces.com/problemset/problem/276/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main () {
    ll n, k, fi, ti, maxi = 0;
    cin>>n>>k;
    cin>>fi>>ti;
    if (ti > k) {
        maxi = fi - (ti - k);
    } else {
        maxi = fi;
    }
    n -= 1;
    while (n--) {
        ll joy;
        cin>>fi>>ti;
        if (ti > k) {
            joy = fi - (ti - k);
        } else {
            joy = fi;
        }
        if (joy > maxi) {
            maxi = joy;
        }
    }
    cout<<maxi;
    return 0;
}