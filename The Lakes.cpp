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

int arr[1000][1000], n, m;
bool vis[1000][1000];

int dfs (int i, int j) {
    int ans = arr[i][j];
    vis[i][j] = true;
    if (i != 0 && !vis[i - 1][j] && arr[i - 1][j] != 0) {
        ans += dfs(i - 1, j);
    }
    if (i != n - 1 && !vis[i + 1][j] && arr[i + 1][j] != 0) {
        ans += dfs (i + 1, j);
    }
    if (j != 0 && !vis[i][j - 1] && arr[i][j - 1] != 0) {
        ans += dfs (i, j - 1);
    }
    if (j != m - 1 && !vis[i][j + 1] && arr[i][j + 1] != 0) {
        ans += dfs (i, j + 1);
    }
    return ans;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        cin>>n>>m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
                vis[i][j] = false;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] != 0 && !vis[i][j]) {
                    int cur = dfs (i, j);
                    ans = max (cur, ans);
                }
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}