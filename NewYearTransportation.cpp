// Codeforces Problem: 500A - New Year Transportation
// Link: https://codeforces.com/problemset/problem/500/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

#define ll long long

int main () {
    ll n, t;
    cin>>n>>t;
    int arr[n] = {0};
    string ans = "NO";
    for (int i = 1; i < n; i++) {
        cin>>arr[i];
    }
    for (int i = 1; i <= n; i += arr[i]) {
        if (i == t) {
            ans = "YES";
            break;
        }
    }
    cout<<ans;
    return 0;
}