// Codeforces Problem: 1527B1 - Palindrome Game (easy version)
// Link: https://codeforces.com/problemset/problem/1527/B1
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
        int n, zero = 0, one = 0;
        cin>>n;
        for (int i = 0; i < n; i++) {
            char c;
            cin>>c;
            if (c == '0') {
                zero++;
            } else {
                one++;
            }
        }
        if (zero != 1 && zero & 1) {
            cout<<"ALICE\n";
        } else {
            cout<<"BOB\n";
        }
    }
    return 0;
}