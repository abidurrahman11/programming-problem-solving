// Codeforces Problem: C - Lose it!
// Link: https://codeforces.com/contest/1176/problem/C
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// #include<vector>
#include<map>
// #include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

int main () {
    int n, a;
    cin>>n;
    map <int, int> mp;
    for (int i = 0; i < n; i++) {
        cin>>a;
        if (a == 4) {
            mp[a]++;
        } else if (a == 8 && mp[4] > mp[a]) {
            mp[a]++;
        } else if (a == 15 && mp[8] > mp[a]) {
            mp[a]++;
        } else if (a == 16 && mp[15] > mp[a]) {
            mp[a]++;
        } else if (a == 23 && mp[16] > mp[a]) {
            mp[a]++;
        } else if (a == 42 && mp[23] > mp[a]) {
            mp[a]++;
        }
    }
    cout<<n - mp[42] * 6;
    return 0;
}