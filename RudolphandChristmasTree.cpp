// Codeforces Problem: D - Rudolph and Christmas Tree
// Link: https://codeforces.com/contest/1846/problem/D
// Status: Accepted      Language: C++

#include<iostream>
#include<iomanip>
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
        double d, h;
        cin>>n>>d>>h;
        double arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        double ans = 0, area = (d * h) / 2;
        for (int i = 0; i < n; i++) {
            ans += area;
            if (i < n- 1 && arr[i] + h > arr[i + 1]){
                double h2 = arr[i] + h - arr[i + 1];
                double d2 = (d * h2) / h;
                ans -= (d2 * h2) / 2;
            }
        }
        cout<<fixed<<setprecision (10)<<ans<<nl;
    }
    return 0;
}