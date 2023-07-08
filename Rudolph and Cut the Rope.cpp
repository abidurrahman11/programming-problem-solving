// Codeforces Problem: A. Rudolph and Cut the Rope
// Link: https://codeforces.com/problemset/problem/1846/A
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
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        int n, cut = 0;
        cin>>n;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin>>a>>b;
            if (a > b) {
                cut++;
            }
        }
        cout<<cut<<nl;
    }
    return 0;
}