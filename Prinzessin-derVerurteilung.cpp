// Codeforces Problem: 1536B - Prinzessin der Verurteilung
// Link: https://codeforces.com/problemset/problem/1536/B
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
#include<set>
// #include<vector>
// #include<map>
// #include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

void solve () {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int frq[26] = {0};
    for (int i = 0; i < n; i++) {
        frq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (frq[i] == 0) {
            cout<<(char) (97 + i)<<nl;
            return;
        }
    }
    set <string> st;
    for (int i = 0; i < n - 1; i++) {
        string subs = "";
        subs += s[i];
        subs += s[i + 1];
        st.insert (subs);
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            string subs = "";
            subs += (char) (97 + i);
            subs += (char) (97 + j);
            if (st.find (subs) == st.end ()) {
                cout<<subs<<nl;
                return;
            }
        }
    }
    set <string> st2;
    for (int i = 0; i < n - 2; i++) {
        string subs = "";
        subs += s[i];
        subs += s[i + 1];
        subs += s[i + 2];
        st.insert (subs);
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            string subs = "a";
            subs += (char) (97 + i);
            subs += (char) (97 + j);
            if (st.find (subs) == st.end ()) {
                cout<<subs<<nl;
                return;
            }
        }
    }
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        solve ();
    }
    return 0;
}