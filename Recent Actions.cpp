// Codeforces Problem: A - Recent Actions
// Link: https://codeforces.com/contest/1799/problem/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, m, sz = 0;
        cin>>n>>m;
        int arr[m];
        for (int i = 0; i < m; i++) {
            cin>>arr[i];
            sz = max(sz, arr[i]);
        }
        int idx = n - 1, arr2[sz + 1] = {0}, ans[n] = {0};
        for (int i = 0; i < m; i++) {
            arr2[arr[i]] = 1;
        }
        for (int i = 0; i < m; i++) {
            if (arr2[arr[i]] == 1) {
                ans[idx] = i + 1;
                arr2[arr[i]] = 0;
                idx--;
            }
        }
        for (int i = 0; i < n; i++) {
            if (ans[i] == 0) {
                cout<<-1<<" ";
            } else {
                cout<<ans[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}