// Codeforces Problem: C - Particles
// Link: https://codeforces.com/contest/1844/problem/C
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
        int n, neg = 0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] < 0) {
                neg++;
            }
        }
        if (n == neg) {
            cout<<*max_element(arr, arr + n)<<nl;
            continue;
        }
        ll odSum = 0, evSum = 0;
        for (int i = 0; i < n; i++) {
            if (i & 1) {
                odSum += max (arr[i], 0);
            } else {
                evSum += max (arr[i], 0);
            }
        }
        cout<<max (odSum, evSum)<<nl;
    }
    return 0;
}