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
        int arr[n + 1];
		arr[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin>>arr[i];
        }
        map <int, int> mp;
        for (int i = 1; i <= n; i++) {
            if (arr[i] != arr[i - 1]) {
                mp[arr[i]]++;
            }
        }
        mp[arr[1]]--;
		mp[arr[n]]--;
        int ans = MOD;
        for (auto e: mp) {
            if (e.second < ans) {
                ans = e.second;
            }
        }
        cout<<ans + 1<<nl;
    }
    return 0;
}