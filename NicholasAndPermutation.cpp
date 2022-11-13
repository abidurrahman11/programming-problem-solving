// Codeforces Problem: Nicholas and Permutation
// Link: https://codeforces.com/problemset/problem/676/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, sm, bg;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int mini = *min_element(arr, arr+n);
    int maxi = *max_element(arr, arr+n);
    for (int i = 0; i < n; i++) {
        if (arr[i] == mini) {
            sm = i+1;
        }
        if (arr[i] == maxi) {
            bg = i+1;
        }
    }
    cout<<max(max(n - bg, bg - 1), max(n - sm, sm - 1));
    return 0;
}