// Codeforces Problem: 1855A - Dalton the Teacher
// Link: https://codeforces.com/problemset/problem/1855/A
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
        int n;
        cin>>n;
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            int a;
            cin>>a;
            if (i == a) {
                cnt++;
            }
        }
        cout<<(cnt + 1) / 2<<nl;
    }
    return 0;
}