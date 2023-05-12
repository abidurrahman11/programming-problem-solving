// Codeforces Problem: A - Tieni aggiornato il catalogo
// Link: https://codeforces.com/gym/420506/problem/A
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
//#include<vector>
#include<map>
//#include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main () {
    int q;
    cin>>q;
    char ch;
    ll x;
    map <ll, int> mp;
    while (q--) {
        cin>>ch>>x;
        if (ch == 'a') {
            mp[x]++;
        } else if (ch == 't') {
            mp[x]--;;
        } else {
            cout<<mp[x]<<"\n";
        }
    }
    return 0;
}