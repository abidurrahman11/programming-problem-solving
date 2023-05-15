// Codeforces Problem: B - La camera dei cestini
// Link: https://codeforces.com/gym/420506/problem/B
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
#include<vector>
//#include<map>
//#include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main () {
    int n, m, q;
    cin>>n>>m>>q;
    vector <vector <int>> v (m);
    for (int i = 0; i < n; i++) {
        v[0].push_back(i);
    }
    while (q--) {
        int a, b;
        char c;
        cin>>c>>a>>b;
        if (c == 's') {
            v[b].push_back(v[a].back());
            v[a].pop_back();
        } else {
            if (v[a].size() > b) {
                cout<<v[a][b]<<nl;
            } else {
                cout<<-1<<nl;
            }
        }
    }
    return 0;
}