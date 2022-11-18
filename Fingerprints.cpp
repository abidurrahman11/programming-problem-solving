// Codeforces Problem: Fingerprints
// Link: https://codeforces.com/contest/994/problem/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, m;
    cin>>n>>m;
    int arr[n], arr2[m];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < m; i++) {
        cin>>arr2[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i] == arr2[j]) {
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}