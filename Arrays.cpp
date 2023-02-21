// Codeforces Problem: 572A - Arrays
// Link: https://codeforces.com/problemset/problem/572/A
// Status: Accepted      Language: C++

#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, n2, k, m;
    cin>>n>>n2>>k>>m;
    string ans = "YES";
    int arr[n], arr2[n2];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < n2; i++) {
        cin>>arr2[i];
    }
    sort (arr2, arr2 + n2, greater <int> ());
    for (int i = 0; i < k; i++) {
        if (arr[i] >= arr2[m - 1]) {
            ans = "NO";
        }
    }
    cout<<ans;
    return 0;
}