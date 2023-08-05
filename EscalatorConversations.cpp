// Codeforces Problem: A - Escalator Conversations
// Link: https://codeforces.com/contest/1851/problem/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
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
        int n, m, k, h;
        cin>>n>>m>>k>>h;
        int arr[n], ans = 0;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++) {
            int dif = abs (arr[i] - h);
            if (dif && dif % k == 0 && dif < m * k) {
                ans++;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}