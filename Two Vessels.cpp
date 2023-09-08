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
        if (a == b) {
            cout<<0<<nl;
            continue;
        }
        int n1 = max (a, b);
        int n2 = min (a, b);
        int dif = (n1 - n2) + 1;
        int ans = ((dif / 2) + c - 1) / c;
        cout<<ans<<nl;
    }
    return 0;
}