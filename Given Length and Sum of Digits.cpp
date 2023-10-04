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
    int m, s;
    cin>>m>>s;
    if (s == 0 && m == 1) {
        cout<<0<<ws<<0<<nl;
    } else if (s == 0 || s > 9 * m) {
        cout<<-1<<ws<<-1<<nl;
    } else {
        string mn, mx;
        int n1 = 9 * m - s, n2 = s;
        for (int i = 0; i < m; i++) {
            int t = min (9 - (i == 0), n1);
            mn += '9' - t;
            n1 -= t;
            int u = min (9, n2);
            mx += '0' + u;
            n2 -= u;
        }
        cout<<mn<<ws<<mx<<nl;
    }
    return 0;
}