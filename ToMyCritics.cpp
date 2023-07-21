// Codeforces Problem: A - To My Critics
// Link: https://codeforces.com/contest/1850/problem/A
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
    int t;
    cin>>t;
    while (t--) {
        int a, b, c;
        cin>>a>>b>>c;
        if (a + b >= 10) {
            cout<<"YES\n";
        } else if (b + c >= 10) {
            cout<<"YES\n";
        } else if (a + c >= 10) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}