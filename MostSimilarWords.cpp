// Codeforces Problem: C - Most Similar Words
// Link: https://codeforces.com/contest/1676/problem/C
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, m, ans = 100001;
        cin>>n>>m;
        string arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int diff = 0;
                for (int k = 0; k < m; k++) {
                    diff += abs(arr[i][k] - arr[j][k]);
                }
                ans = min(ans, diff);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}