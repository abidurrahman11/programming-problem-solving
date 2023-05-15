// Codeforces Problem: A - Divisible Array
// Link: https://codeforces.com/contest/1828/problem/A
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
//#include<vector>
//#include<map>
//#include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        for (int i = 1; i <= n; i++) {
            cout<< i * 2<<ws;
        }
        cout<<nl;
    }
    return 0;
}