#include<bits/stdc++.h>
using namespace std;

void ans() {
    int n;
    cin>>n;
    int a[n], b[n];
    int a0 = 0, a1 = 0, b0 = 0, b1 = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        a[i] = x;
        if (x == 0) {
            a0++;
        } else {
            a1++;
        }
    }
    for (int i = 0; i < n; i++) {
        int y;
        cin>>y;
        b[i] = y;
        if (y == 0) {
            b0++;
        } else {
            b1++;
        }
    }  
    int diff = min(abs(a0 - b0), abs(a1 - b1));
    int rng = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            rng++;
        }
    }

    if (rng > diff ) {
        cout<<diff+1<<"\n";
    } else {
        cout<<diff<<"\n";
    }
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        ans();
    }
    return 0;
}


//Codeforces Problem: Make A Equal to B
//Link: https://codeforces.com/contest/1736/problem/A
//Status: Accepted      Language: C++