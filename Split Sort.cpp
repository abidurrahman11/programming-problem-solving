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
    int t;
    cin>>t;
    while (t--) {
        int n, a;
        cin>>n;
        vector <pair <int, int>> v;
        for (int i = 1; i <= n; i++) {
            cin>>a;
            v.emplace_back (a, i);
        }
        sort (v.begin (), v.end ());
        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            if (v[i + 1].second < v[i].second) {
                cnt++;
            }
        }
        cout<<cnt<<nl;
    }
    return 0;
}