// Codeforces Problem: Shaass and Oskols
// Link: https://codeforces.com/problemset/problem/294/A
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
    int m;
    cin>>m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin>>x>>y;
        arr[x - 2] += (y - 1);
        arr[x] += (arr[x - 1]  - y);
        arr[x - 1] = 0;
    }
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<"\n";
    }
    return 0;
}