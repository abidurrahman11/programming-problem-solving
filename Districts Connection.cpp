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

int n, arr[5000];
bool vis[5000];
vector <pair <int, int>> v;

void dfs (int node) {
    if (!vis[node]) {
        for (int i = 0; i < n; i++) {
            if (arr[node] != arr[i] && (!vis[i] || !vis[node])) {
                v.emplace_back (node + 1, i + 1);
                vis[i] = true;
                vis[node] = true;
            }
        }
    }
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        cin>>n;
        v.clear ();
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            vis[i] = false;
        }
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs (i);
            }
        }
        if ((int) v.size () == n - 1) {
            cout<<"YES\n";
            for (auto e: v) {
                cout<<e.first<<ws<<e.second<<nl;
            }
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}