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
        int n, ans = 0;
        cin>>n;
        int arr[n], arr2[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            arr2[i] = arr[i];
        }
        sort (arr, arr + n);
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] != arr2[i]) {
                ans = arr[i];
                break;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}