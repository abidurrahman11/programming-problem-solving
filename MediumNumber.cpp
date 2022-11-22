// Codeforces Problem: Medium Number
// Link: https://codeforces.com/problemset/problem/1760/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin>>arr[i];
        }
        sort(arr, arr + 3);
        cout<<arr[1]<<"\n";
    }
    return 0;
}