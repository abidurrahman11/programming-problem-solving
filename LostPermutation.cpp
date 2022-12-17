// Codeforces Problem: Lost Permutation
// Link: https://codeforces.com/contest/1759/problem/B
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int m, s;
        cin>>m>>s;
        int arr[m], maxi = 0, tot = 0;
        string ans = "NO";
        for (int i = 0; i < m; i++) {
            cin>>arr[i];
            maxi = max(maxi, arr[i]);
            tot += arr[i];
        }
        tot = ((maxi * (maxi + 1)) / 2) - tot;
        if (s == tot) {
            ans = "YES";
        } else {
            for (int i = maxi + 1; ; i++) {
                tot += i;
                if (tot == s) {
                    ans = "YES";
                    break;
                }
                if (tot > s) {
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}