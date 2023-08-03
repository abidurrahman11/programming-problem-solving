// Codeforces Problem: B - Fibonaccharsis
// Link: https://codeforces.com/contest/1853/problem/B
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
        int n, k, ans = 0;
        cin>>n>>k;
        for (int i = 0; i <= n; i++) {
            bool pos = true;
            int a1 = n, a2 = i;
            for (int j = 1; j <= k - 2; j++) {
                int tmp = a1 - a2;
                a1 = a2;
                a2 = tmp;
                if (a2 > a1 || a2 < 0) {
                    pos = false;
                    break;
                }
            }
            if (pos) {
                ans++;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}