// Codeforces Problem: Sereja and Mugs
// Link: https://codeforces.com/problemset/problem/426/A
// Status: Accepted      Language: C++

#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int n, s;
    cin>>n>>s;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++) {
        s -= arr[i];
    }
    if (s >= 0) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}