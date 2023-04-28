// Codeforces Problem: 1632C - Strange Test
// Link: https://codeforces.com/problemset/problem/1632/C
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
//#include<map>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main () {
    int t;
    cin>>t;
    while (t--) {
        int a, b;
        cin>>a>>b;
        if ((a | b) == b) {
            cout<<1<<nl;
            continue;
        }
        int ans = b - a;
        for (int i = a + 1; i < b; i++) {
            if ((i | b) == b) {
                ans = (i - a) + 1;
                break;
            }
        }
        for (int i = b + 1; i < b + b; i++) {
            if ((a | i) == i) {
                ans = min (ans, (i - b) + 1);
                break;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}