// Codeforces Problem: C - Penalty
// Link: https://codeforces.com/contest/1553/problem/C
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// #include<vector>
// #include<map>
// #include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

int main () {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int i, t1g = 0, t2g = 0, t1c = 0, t2c = 0;
        for (i = 0; i < 10; i++) {
            if (s[i] == '1') {
                if (i % 2 == 0) {
                    t1g++;
                } else {
                    t2g++;
                }
            }
            if (s[i] == '?') {
                if (i % 2 == 0) {
                    t1c++;
                } else {
                    t2c++;
                }
            }
            if (t1g + t1c > t2g + (10 - i) / 2 || t2g + t2c > t1g + (9 - i) / 2) {
                i++;
                break;
            }
        }
        cout<<i<<nl;
    }
    return 0;
}