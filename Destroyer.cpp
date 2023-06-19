// Codeforces Problem: A - Destroyer	
// Link: https://codeforces.com/contest/1836/problem/A
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
        int n, mx = 0;
        cin>>n;
        int arr[101] = {0};
        for (int i = 0; i < n; i++) {
            int a;
            cin>>a;
            arr[a]++;
            if (a > mx) {
                mx = a;
            }
        }
        string ans = "YES";
        for (int i = 0; i <= mx; i++) {
            if (arr[i - 1] < arr[i]) {
                ans = "NO";
                break;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}