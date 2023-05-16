// Codeforces Problem: C - Traffic Light
// Link: https://codeforces.com/contest/1744/problem/C
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
//#include<vector>
//#include<map>
//#include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        char c;
        string s;
        cin>>n>>c>>s;
        if (c == 'g') {
            cout<<0<<nl;
            continue;
        }
        s += s;
        int maxD = 0;
        for (int i = 0; i < 2 * n; i++) {
            int curD = 0;
            if (s[i] == c) {
                while (s[i] != 'g' && i < 2 * n) {
                    curD++;
                    i++;
                }
                maxD = max (curD, maxD);
            }
        }
        cout<<maxD<<nl;
    }
    return 0;
}