// Codeforces Problem: 1182A - Filling Shapes
// Link: https://codeforces.com/problemset/problem/1182/A
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
    int n;
    cin>>n;
    if (n & 1) {
        cout<<0;
    } else {
        cout<<(1<<n / 2);
    }
    return 0;
}