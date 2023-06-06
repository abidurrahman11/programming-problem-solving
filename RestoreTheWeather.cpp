// Codeforces Problem: B - Restore the Weather
// Link: https://codeforces.com/contest/1833/problem/B
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
#include<vector>
//#include<map>
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
        int n, k, a, b;
        cin>>n>>k;
        vector <pair <int, int>> v1;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>a;
            v1.push_back({a, i});
        }
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort (v1.begin(), v1.end());
        sort (arr, arr + n);
        for (int i = 0; i < n; i++) {
            v1[i].first = v1[i].second;
            v1[i].second = arr[i];
        }
        sort (v1.begin(), v1.end());
        for (auto p: v1) {
            cout<<p.second<<ws;
        }
        cout<<nl;
    }
    return 0;
}