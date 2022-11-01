// Codeforces Problem: Circle Line
// Link: https://codeforces.com/problemset/problem/278/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, s, t;
    cin>>n;
    int arr[n + 2] = {0};
    for (int i = 2; i < n + 2; i++) {
        int x;
        cin>>x;
        arr[i] = arr[i - 1] + x;
    }
    cin>>s>>t;
    if (t < s) {
        swap(s, t);
    }
    int d1 = arr[t] - arr[s];
    int d2 = arr[n + 1] - d1;
    if ( d1 > d2) {
        cout<<d2;
    } else {
        cout<<d1;
    }
    return 0;
}