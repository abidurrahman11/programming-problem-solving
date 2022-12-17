// Codeforces Problem: Block Towers
// Link: https://codeforces.com/problemset/problem/1767/B
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    long long t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        long long arr[n];
        for (long long i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr + 1, arr + n);
        long long tow1 = arr[0];
        for (long long i = 1; i < n; i++) {
            if (arr[i] > tow1) {
                tow1 = tow1 + (((arr[i] - tow1) + 1) / 2);
            }
        }
        cout<<tow1<<"\n";
    }
    return 0;
}