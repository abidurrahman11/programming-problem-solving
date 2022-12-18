// Codeforces Problem: Two-gram
// Link: https://codeforces.com/contest/977/problem/B
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    string s;
    cin>>n>>s;
    map <string, int> mp;
    for (int i = 0; i < n - 1; i++) {
        mp[s.substr(i, 2)]++;
    }
    string maxS = "";
    int maxN = 0;
    for (auto v : mp) {
        if (v.second > maxN) {
            maxN = v.second;
            maxS = v.first;
        }
    }
    cout<<maxS;
    return 0;
}