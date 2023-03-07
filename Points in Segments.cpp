// Codeforces Problem: 1015A - Points in Segments	
// Link: https://codeforces.com/problemset/problem/1015/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, m;
    cin>>n>>m;
    int arr[m + 1] = {0};
    for (int i = 0; i < n; i++) {
        int x, y;
        cin>>x>>y;
        for (int i = x; i <= y; i++) {
            arr[i]++;
        }
    }
    int ans = 0;
    for (int i = 1; i < m + 1; i++) {
        if (arr[i] == 0) {
            ans++;
        }
    }
    cout<<ans<<"\n";
    for (int i = 1; i <= m; i++) {
        if (arr[i] == 0) {
            cout<<i<<" ";
        }
    }
    return 0;
}