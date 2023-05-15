// Codeforces Problem: A - Trust Nobody
// Link: https://codeforces.com/contest/1826/problem/A
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
//#include<vector>
//#include<map>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, lier = -1;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (int i = 0; i <= n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] > i) {
                    cnt++;
                }
            }
            if (cnt == i) {
                lier = i;
                break;
            }
        }
        cout<<lier<<nl;
    }
    return 0;
}