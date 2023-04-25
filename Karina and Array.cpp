// Codeforces Problem: B - Karina and Array
// Link: https://codeforces.com/contest/1822/problem/B
// Status: Accepted      Language: C++

#include<iostream>
#include<algorithm>
using namespace std;

#define ll long long

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        ll arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort (arr, arr + n);
        ll res = max ((arr[0] * arr[1]), (arr[n - 1] * arr[n - 2]));
        cout<<res<<"\n";
    }
    return 0;
}