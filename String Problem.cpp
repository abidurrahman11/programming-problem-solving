// Codeforces Problem: B - String Problem
// Link: https://codeforces.com/contest/33/problem/B
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

int dist[26][26];

int main () {
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (i != j) {
                dist[i][j] = 1e9;
            }
        }
    }
    string s1, s2;
    int n, ans = 0;
    cin>>s1>>s2>>n;
    for (int i = 0; i < n; i++) {
        char a1, a2;
        int c;
        cin>>a1>>a2>>c;
        dist[a1 - 'a'][a2 - 'a'] = min (dist[a1 - 'a'][a2 - 'a'], c);
    }
    if (s1.size () != s2.size ()) {
        cout<<-1<<nl;
        return 0;
    }
    for (int k = 0; k < 26; k++) {
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) {
                dist[i][j] = min (dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    for (int i = 0; i < s1.size (); i++) {
        int cost = 1e9;
        char ch;
        if (s1[i] != s2[i]) {
            for (int j = 0; j < 26; j++) {
                int cc = dist[s1[i] - 'a'][j] + dist[s2[i] - 'a'][j];
                if (cc < cost) {
                    cost = cc;
                    ch = (char) j + 'a';
                }
            }
            if (cost >= 1e9) {
                cout<<-1<<nl;
                return 0;
            }
            ans += cost;
            s1[i] = ch;
        }
    }
    cout<<ans<<nl<<s1;
    return 0;
}