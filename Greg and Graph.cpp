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
    int n;
    cin>>n;
    vector <vector <int>> dist (n + 1, vector <int> (n + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin>>dist[i][j];
        }
    }
    vector <ll> del (n), ans;
    for (int i = 0; i < n; i++) {
        cin>>del[i];
    }
    reverse (del.begin (), del.end ());
    for (int k = 0; k < n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int new_dist = dist[i][del[k]] + dist[del[k]][j];
                dist[i][j] = min (dist[i][j], new_dist);
            }
        }
        ll sum = 0;
        for (int i = 0; i <= k; i++) {
            for (int j = 0; j <= k; j++) {
                sum += dist[del[i]][del[j]];
            }
        }
        ans.push_back (sum);
    }
    for (int i = ans.size () - 1; i >= 0; i--) {
        cout<<ans[i]<<ws;
    }
    cout<<nl;
    return 0;
}