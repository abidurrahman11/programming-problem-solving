// Codeforces Problem: Valera and Plates
// Link: https://codeforces.com/contest/369/problem/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, m, k, ans = 0;
    cin>>n>>m>>k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            if (m > 0) {
                m--;
            } else if (m == 0) {
                ans++;
            }
        } else if (arr[i] == 2) {
            if (k > 0) {
                k--;
            } else if (m > 0) {
                m--;
            } else {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}