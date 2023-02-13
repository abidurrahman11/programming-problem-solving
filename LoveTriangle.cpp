// Codeforces Problem: 939A - Love Triangle
// Link: https://codeforces.com/problemset/problem/939/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n + 1];
    string ans = "NO";
    for (int i = 1; i <= n; i++) {
        cin>>arr[i];
    }
    for (int i = 1; i <= n; i++) {
        if (arr[arr[arr[i]]] == i) {
            ans = "YES";
            break;
        }
    }
    cout<<ans;
    return 0;
}