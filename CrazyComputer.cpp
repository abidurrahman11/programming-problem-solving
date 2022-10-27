// Codeforces Problem: Crazy Computer
// Link: https://codeforces.com/problemset/problem/716/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, c, ans = 0;
    cin>>n>>c;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++) {
        if (arr[i+1] - arr[i] > c) {
            ans = 0;
        } else {
            ans++;
        }
    }
    cout<<ans+1;
    return 0;
}