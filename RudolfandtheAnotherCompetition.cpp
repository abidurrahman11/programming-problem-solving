// Codeforces Problem: C - Rudolf and the Another Competition
// Link: https://codeforces.com/contest/1846/problem/C
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
#include<vector>
// #include<map>
#include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

int main () {
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        int n, m, h, ans = 1;
        cin>>n>>m>>h;
        pair <int, ll> winr;
        for (int i = 0; i < n; i++) {
            vector <int> num (m);
            for (int j = 0; j < m; j++) {
                cin>>num[j];
            }
            sort (num.begin(), num.end ());
            ll pnlt = 0, sum = 0;
            int scr = 0;
            for (int j = 0; j < m; j++) {
                if (sum + num[j] <= h) {
                    sum += num[j];
                    pnlt += sum;
                    scr++;
                } else {
                    break;
                }
            }
            if (i > 0) {
                if (make_pair (-scr, pnlt) < winr) {
                    ans++;
                }
            } else {
                winr = {-scr, pnlt};
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}