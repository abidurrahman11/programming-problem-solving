// Codeforces Problem: B - Parity Sort
// Link: https://codeforces.com/contest/1851/problem/B
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// #include<vector>
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
        int n;
        cin>>n;
        int arr[n], arr2[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            arr2[i] = arr[i];
        }
        sort (arr2, arr2 + n);
        string ans = "YES";
        for (int i = 0; i < n; i++) {
            if ((arr[i] % 2 == 0 && arr2[i] % 2 == 1) || (arr2[i] % 2 == 0 && arr[i] % 2 == 1)) {
                ans = "NO";
                break;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}