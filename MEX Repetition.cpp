#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
#include<vector>
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
        ll n, k;
        cin>>n>>k;
        vector <int> v (n + 1);
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin>>v[i];
            sum += v[i];
        }
        int mex = ((n * (n + 1)) / 2) - sum;
        v[n] = mex;
        for (int i = (n + 1) - (k % (n + 1)); i <= n; i++) {
            cout<<v[i]<<ws;
        }
        for (int i = 0; i < (n + 1) - (k % (n + 1)) - 1; i++) {
            cout<<v[i]<<ws;
        }
        cout<<nl;
    }
    return 0;
}