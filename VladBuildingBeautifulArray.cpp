// Codeforces Problem: C - Vlad Building Beautiful Array
// Link: https://codeforces.com/contest/1833/problem/C
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
//#include<vector>
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
        int n, odd = 0, even = 0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] & 1) {
                odd++;
            } else {
                even++;
            }
        }
        if (odd == n) {
            cout<<"YES\n";
        } else if (even == n) {
            cout<<"YES\n";
        } else {
            int mn = *min_element (arr, arr + n);
            if (mn & 1) {
                cout<<"YES\n";
            } else {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}