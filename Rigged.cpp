#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
#include<vector>
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
        int n;
        cin>>n;
        vector <pair <ll, ll>> v (n);
        for (int i = 0; i < n; i++) {
            cin>>v[i].first>>v[i].second;
        }
        bool pos = true;
        for (int i = 1; i < n; i++) {
            if (v[i].first >= v[0].first) {
                if (v[i].second >= v[0].second) {
                    pos = false;
                    break;
                }
            }
        }
        if (pos) {
            cout<<v[0].first<<nl;
        } else {
            cout<<-1<<nl;
        }
    }
    return 0;
}