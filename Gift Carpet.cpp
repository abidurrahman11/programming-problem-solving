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
        int n, m;
        cin>>n>>m;
        bool v = false, I = false, k = false, a = false;
        string s[n];
        for (int i = 0; i < n; i++) {
            cin>>s[i];
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (s[j][i] == 'v' && v == false) {
                    v = true;
                    break;
                } else if (s[j][i] == 'i' && I == false && v) {
                    I = true;
                    break;
                } else if (s[j][i] == 'k' && k == false && v && I) {
                    k = true;
                    break;
                } else if (s[j][i] == 'a' && a == false && v && I && k) {
                    a = true;
                    break;
                }
            }
        }
        if (v && I && k && a) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}