// Codeforces Problem: A - The Good Array
// Link: https://codeforces.com/contest/1839/problem/A
// Status: Accepted      Language: C++

#include<iostream>
#include<math.h>
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
    FASTIO;
    int t;
    cin>>t;
    while (t--) {
        float n, k;
        cin>>n>>k;
        cout<<ceil ((n - 1) / k) + 1<<"\n";
    }
    return 0;
}