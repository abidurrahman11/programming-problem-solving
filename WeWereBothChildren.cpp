// Codeforces Problem: F - We Were Both Children
// Link: https://codeforces.com/contest/1850/problem/F
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
#include<vector>
// #include<map>
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
        int n;
        cin>>n;
        vector <int> v (n + 1, 0);
        for (int i = 0; i < n; i++) {
            int a;
            cin>>a;
            if (a <= n) {
                v[a]++;
            }
        }
        vector <int> frq(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            if (v[i] == 0) {
                continue;
            }
            int a = 1;
            while (i * a <= n) {
                frq[i * a] += v[i];
                a++;
            }
        }
        cout<<*max_element (frq.begin(), frq.end ())<<nl;
    }
    return 0;
}