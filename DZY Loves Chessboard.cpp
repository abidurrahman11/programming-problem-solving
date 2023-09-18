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
    int n, m;
    cin>>n>>m;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin>>s[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] == '.') {
                if (i & 1) {
                    if (j & 1) {
                        s[i][j] = 'B';
                    } else {
                        s[i][j] = 'W';
                    }
                } else {
                    if (j & 1) {
                        s[i][j] = 'W';
                    } else {
                        s[i][j] = 'B';
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout<<s[i]<<nl;
    }
    return 0;
}