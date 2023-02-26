// Codeforces Problem: A - Serval and Mocha's Array
// Link: https://codeforces.com/contest/1789/problem/A
// Status: Accepted      Language: C++

#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, maxi = 1000001;
        cin>>n;
        string ans = "No";
        int arr[n];
        for (int i = 0; i < n; i++) {
           cin>>arr[i];
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                maxi = min (maxi, __gcd(arr[i], arr[j]));
            }
        }
        if (maxi <= 2) {
            cout<<"Yes\n";
        } else {
            cout<<"No\n";
        }
    }
    return 0;
}