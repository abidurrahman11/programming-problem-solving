// Codeforces Problem: Atilla's Favorite Problem
// Link: https://codeforces.com/problemset/problem/1760/B
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        int lNum =  s[n - 1] - 96;
        cout<<lNum<<"\n";
    }
    return 0;
}