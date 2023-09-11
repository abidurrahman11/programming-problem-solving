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
        string s, s1, s2;
        cin>>s;
        int n = s.length ();
        n *= 2;
        char op = '(', cls = ')';
        for (int i = 0; i < n; i++) {
            if (i & 1) {
                s1 += cls;
            } else {
                s1 += op;
            }
            if (i < n / 2) {
                s2 += op;
            } else {
                s2 += cls;
            }
        }
        bool f1 = true, f2 = true;
        if (s1.find (s) != string::npos) {
            f1 = false;
        }
        if (s2.find (s) != string::npos) {
            f2 = false;
        }
        if (!f1 && !f2) {
            cout<<"NO\n";
        } else if (f1) {
            cout<<"YES\n"<<s1<<nl;
        } else {
            cout<<"YES\n"<<s2<<nl;
        }
    }
    return 0;
}