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

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n + 1];
        vector <int> v;
        for (int i = 1; i <= n; i++) {
            cin>>arr[i];
        }
        if (arr[1] != n) {
            cout<<"NO\n";
            continue;
        }
        string ans = "YES";
        for (int i = n; i >= 1; i--) {
            while ((int) v.size () < arr[i]) {
                v.push_back (i);
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr[i + 1] != v[i]) {
                ans = "NO";
                break;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}