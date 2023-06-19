// Codeforces Problem: C - Polycarp Recovers the Permutation
// Link: https://codeforces.com/contest/1611/problem/C
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        if (arr[0] == n || arr[n - 1] == n || n == 1) {
            for (int i = (n / 2) - 1; i >= 0; i--) {
                cout<<arr[i]<<ws;
            }
            for (int i = n - 1; i >= n / 2; i--) {
                cout<<arr[i]<<ws;
            }
            cout<<nl;
        } else {
            cout<<-1<<nl;
        }
    }
    return 0;
}