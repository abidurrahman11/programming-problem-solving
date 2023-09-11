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
        int n, x;
        cin>>n>>x;
        int odd = 0, a, evn = 0;
        for (int i = 0; i < n; i++) {
            cin>>a;
            if (a & 1) {
                odd++;
            } else {
                evn++;
            }
        }
        if (odd == 0) {
            cout<<"No\n";
        } else if (!(odd & 1) && x == n) {
            cout<<"No\n";
        } else if (evn == 0 && !(x & 1)) {
            cout<<"No\n";
        } else {
            cout<<"Yes\n";
        }
    }
    return 0;
}