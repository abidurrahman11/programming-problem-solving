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
        int n, m;
        cin>>n>>m;
        n %= m;
        ll cut = 0, l = 0;
        while (n != 0) {
            cut += n;
            n *= 2;
            n %= m;
            l++;
            if (l > 100) {
                cut = -1;
                break;
            }
        }
        cout<<cut<<nl;
    }
    return 0;
}