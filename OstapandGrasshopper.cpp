#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, k;
    string s;
    cin>>n>>k;
    cin>>s;
    int g, t;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'G') {
            g = i;
        }
        if (s[i] == 'T') {
            t = i;
        }
    }

    if (g > t) {
        swap(g, t);
    }
    int ans = 0;

    for (int i = g;; i+=k) {
        if (i >= n || s[i] == '#') {
            ans = 1;
            break;
        }
        if (i == t) {
            break;
        }
    }

    if (ans) {
        cout<<"NO";
    } else {
        cout<<"YES";
    }
    
    return 0;
}



//Codeforces Problem: Ostap and Grasshopper
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/735/A