// Codeforces Problem: A - Unit Array
// Link: https://codeforces.com/contest/1834/problem/A
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

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, pos = 0, neg = 0;
        cin>>n;
        for (int i = 0; i < n; i++) {
            int a;
            cin>>a;
            if (a == 1) {
                pos++;
            } else {
                neg++;
            }
        }
        if (pos == n) {
            cout<<0<<nl;
        } else if (pos > neg && neg % 2 == 1) {
            cout<<1<<nl;
        } else if (pos > neg && neg % 2 == 0) {
            cout<<0<<nl;
        } else if (neg == pos && neg % 2 == 1) {
            cout<<1<<nl;
        } else if (neg == pos && neg % 2 == 0) {
            cout<<0<<nl;
        } else {
            int h = neg - (n / 2);
            if ((n / 2) % 2 == 0) {
                cout<<h<<nl;
            } else {
                cout<<h + 1<<nl;
            }
        }
    }
    return 0;
}