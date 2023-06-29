// Codeforces Problem: A - Forbidden Integer
// Link: https://codeforces.com/contest/1845/problem/A
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
        int n, k, x;
        cin>>n>>k>>x;
        if (x != 1) {
            cout<<"YES\n"<<n<<nl;
            for (int i = 0; i < n; i++) {
                cout<<1<<ws;
            }
            cout<<nl;
        } else if ((n & 1 && k == 2) || k == 1) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n"<<n / 2<<nl;
            for (int i = 1; i < n / 2; i++) {
                cout<<2<<ws;
            }
            cout<<2 + (n % 2)<<nl;
        }
    }
    return 0;
}