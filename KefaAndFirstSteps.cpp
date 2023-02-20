// Codeforces Problem: 580A - Kefa and First Steps
// Link: https://codeforces.com/problemset/problem/580/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ans = 0, cur = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        cur++;
        if (arr[i] <= arr[i + 1]) {
        }
        if (i == n - 1 || arr[i] > arr[i+ 1]) {
            ans = max (ans, cur);
            cur = 0;
        }
    }
    cout<<ans;
    return 0;
}