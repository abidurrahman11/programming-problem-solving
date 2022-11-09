// Codeforces Problem: Memory and Crow
// Link: https://codeforces.com/problemset/problem/712/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        cout<<arr[i] + arr[i + 1]<<" ";
    }
    cout<<arr[n - 1];
    return 0;
}