// Codeforces Problem: B - Permutation Swap
// Link: https://codeforces.com/contest/1828/problem/B
// Status: Accepted      Language: C++

//#include<iostream>
#include<bits/stdc++.h>
//#include<set>
// #include<vector>
//#include<map>
// #include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> v;
        for (int i = 1; i <= n; i++) {
            int a;
            cin>>a;
            int tmp = abs (a - i);
            if (tmp != 0) {
                v.push_back (tmp);
            }
        }
        int ans = v[0];
        for (int i = 0; i < v.size(); i++) {
            ans = __gcd (ans, v[i]);
        }
        cout<<ans<<nl;
    }
    return 0;
}