// Codeforces Problem: GukiZ and Contest
// Link: https://codeforces.com/problemset/problem/551/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, res = 1;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] < arr[j]) {
                res++;
            }
        }
        cout<<res<<" ";
        res = 1;
    }
    return 0;
}