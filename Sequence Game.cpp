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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        vector <int> v;
        v.push_back (arr[0]);
        for (int i = 1; i < n; i++) {
            if (arr[i] >= arr[ i - 1]) {
                v.push_back (arr[i]);
            } else {
                v.push_back (arr[i]);
                v.push_back (arr[i]);
            }
        }
        cout<<v.size ()<<nl;
        for (auto x: v) {
            cout<<x<<ws;
        }
        cout<<nl;
    }
    return 0;
}