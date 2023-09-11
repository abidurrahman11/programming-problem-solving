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
        int x, ans = 0;
        cin>>x;
        while (x > 0) {
            x -= ans;
            ans++;
        }
        if (x == -1) {
            cout<<ans<<nl;
        } else {
            cout<<ans - 1<<nl;
        }
    }
    return 0;
}