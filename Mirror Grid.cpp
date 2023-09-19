#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// #include<vector>
#include<map>
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
        string s[n];
        for (int i = 0; i < n; i++) {
            cin>>s[i];
        }
        int ans = 0;
        for (int i = 0; i < (n + 1) / 2; i++) {
            for (int j = 0; j < n / 2; j++) {
                map <char, int> mp;
                mp[s[i][j]]++;
                mp[s[n - 1 - i][n - 1 - j]]++;
                mp[s[j][n - 1 - i]]++;
                mp[s[n - 1 - j][i]]++;
                ans += min (mp['0'], mp['1']);
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}