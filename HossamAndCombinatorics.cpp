// Codeforces Problem: Hossam and Combinatorics
// Link: https://codeforces.com/contest/1771/problem/A
// Status: Accepted      Language: C++


#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n, mini = INT_MAX, maxi = 0;
        cin>>n;
        long long arr[n];
        for (long long i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] > maxi) {
                maxi = arr[i];
            }
            if (arr[i] < mini) {
                mini = arr[i];
            }
        }
        long long sc = 0, mc = 0;
        for (long long i = 0; i < n; i++) {
            if (arr[i] == mini) {
                sc++;
            }
            if (arr[i] == maxi) {
                mc++;
            }
        }
        if (sc == n || mc == n) {
            cout<<n * (n - 1)<<"\n";
        } else {
            cout<<sc * mc * 2<<"\n";
        }
    }
    return 0;
}