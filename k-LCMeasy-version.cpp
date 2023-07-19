// Codeforces Problem: 1497C1 - k-LCM (easy version)
// Link: https://codeforces.com/problemset/problem/1497/C1
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
        int n, k;
        cin>>n>>k;
        if (n % 2 == 0 && (n / 2) % 2 == 0) {
            cout<<n / 2<<ws<<n / 4<<ws<<n / 4<<nl;
        } else if (n % 2 == 0 && (n / 2) % 2 == 1) {
            int a = n / 2 - 1;
            cout<<a<<ws<<a<<ws<<n - (a + a)<<nl;
        } else {
            int a = n / 2;
            cout<<a<<ws<<a<<ws<<n - (a + a)<<nl;
        }
    }
    return 0;
}