#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k;
    cin>>n>>m>>k;
    int ans = 1e9;

    for (int i = 1; i <= n; i++) {
        int a;
        cin>>a;
        if (a != 0 && a <= k) {
            ans = min(ans, abs(i - m));
        }
    }
    cout<<ans * 10;
    return 0;
}


//Codeforces Problem: Buying A House
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/796/A