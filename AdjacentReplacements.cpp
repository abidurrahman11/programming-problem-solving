// Codeforces Problem: 1006A - Adjacent Replacements
// Link: https://codeforces.com/problemset/problem/1006/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        if (arr[i] % 2 == 0) {
            cout<<arr[i] - 1<<" ";
        } else {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}