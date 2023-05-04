// Codeforces Problem: 1818B - Indivisible
// Link: https://codeforces.com/problemset/problem/1818/B
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
//#include<map>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n == 1) {
            cout<<1<<nl;
        } else if (n & 1) {
            cout<<-1<<nl;
        } else {
            for (int i = 2; i <= n; i += 2) {
                cout<<i<<ws<<i - 1<<ws;
            }
            cout<<nl;
        }
    }
    return 0;
}