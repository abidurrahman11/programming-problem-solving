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
        int n, k;
        cin>>n>>k;
        int f = n / 2;
        int ans = (((k - 1) + (n % 2) * (k - 1) / f) % n) + 1;
        cout<<ans<<nl;
    }
    return 0;
}