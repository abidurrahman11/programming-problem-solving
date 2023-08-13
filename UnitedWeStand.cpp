// Codeforces Problem: 1859A - United We Stand
// Link: https://codeforces.com/problemset/problem/1859/A
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
#include<vector>
#include<map>
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
        int n;
        cin>>n;
        map <int, int> mp;
        vector <int> v1, v2;
        for (int i = 0; i < n; i++) {
            int a;
            cin>>a;
            mp[a]++;
        }
        bool f = true;
        for (auto e: mp) {
            if (f) {
                for (int i = 0; i < e.second; i++) {
                    v1.push_back (e.first);
                }
                f = false;
            } else {
                for (int i = 0; i < e.second; i++) {
                    v2.push_back (e.first);
                }
            }
        }
        if (v1.size () == 0 || v2.size () == 0) {
            cout<<-1<<nl;
        } else {
            cout<<v1.size ()<<ws<<v2.size ()<<nl;
            for (int i = 0; i < v1.size (); i++) {
                cout<<v1[i]<<ws;
            }
            cout<<nl;
            for (int i = 0; i < v2.size (); i++) {
                cout<<v2[i]<<ws;
            }
            cout<<nl;
        }
    }
    return 0;
}