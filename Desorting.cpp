// Codeforces Problem: 1853A - Desorting
// Link: https://codeforces.com/problemset/problem/1853/A
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
        int n;
        cin>>n;
        int arr[n + 1] = {0};
        bool notSort = false;
        int a, b, mn = 1e9;
        for (int i = 1; i <= n; i++) {
            cin>>arr[i];
            if (arr[i] < arr[i - 1]) {
                notSort = true;
            }
            if (i != 1 && arr[i] - arr[i - 1] < mn) {
                mn = arr[i] - arr[i - 1];
                a = i;
                b = i - 1;
            }
        }
        if (notSort) {
            cout<<0<<nl;
            continue;
        }
        cout<<((arr[a] - arr[b]) / 2) + 1<<nl;
    }
    return 0;
}