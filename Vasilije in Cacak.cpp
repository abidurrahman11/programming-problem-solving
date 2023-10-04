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
        ll n, k, x;
        cin>>n>>k>>x;
        ll sum1 = (k * (k + 1)) / 2;
        ll tot = (n * (n + 1)) / 2;
        ll tmp = n - k;
        ll sum2 = tot - (tmp * (tmp + 1) / 2);
        if (x >= sum1 && x <= sum2) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}