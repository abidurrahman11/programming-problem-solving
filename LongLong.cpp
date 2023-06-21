// Codeforces Problem: B - Long Long
// Link: https://codeforces.com/contest/1843/problem/B
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
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        ll ans = 0, neg = 0;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] >= 0) {
                ans += arr[i];
            } else {
                ans += -arr[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                neg++;
                while (arr[i] <= 0) {
                    i++;
                }
            }
        }
        cout<<ans<<ws<<neg<<nl;
    }
    return 0;
}