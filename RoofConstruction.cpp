// Codeforces Problem: B - Roof Construction
// Link: https://codeforces.com/contest/1632/problem/B
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
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
        int n;
        cin>>n;
        int maxP2 = 1, cpyN = n - 1;
        while (cpyN) {
            maxP2 *= 2;
            cpyN /= 2;
        }
        maxP2 /= 2;
        for (int i = n - 1; i >= maxP2; i--){
            cout<<i<<ws;
        }
        for (int i = 0; i < maxP2; i++) {
            cout<<i<<ws;
        }
        cout<<nl;
    }
    return 0;
}