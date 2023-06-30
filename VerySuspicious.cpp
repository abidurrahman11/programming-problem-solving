// Codeforces Problem: 1670D - Very Suspicious
// Link: https://codeforces.com/problemset/problem/1670/D
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
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int l = 1, r = 100000, ans = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            ll left = mid / 3, right = mid / 3, horzn = mid / 3;
            if (mid % 3 == 1) {
                left++;
            } else if (mid % 3 == 2) {
                left++;
                right++;
            }
            ll tot = 2 * (left * right + right * horzn + left * horzn);
            if (tot >= n) {
                r = mid - 1;
                ans = mid;
            } else {
                l = mid + 1;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}