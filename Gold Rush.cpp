// Codeforces Problem: 1829D - Gold Rush
// Link: https://codeforces.com/problemset/problem/1829/D
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
//#include<map>
//#include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

bool check (int n, int m) {
    if (n == m) {
        return true;
    } else if (n % 3 != 0) {
        return false;
    } else {
        return (check (n / 3, m) || check (2 * n / 3, m));
    }
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        bool res = check (n, m);
        if (res) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}