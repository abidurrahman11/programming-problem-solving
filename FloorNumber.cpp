#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, x;
        cin>>n>>x;
        if (n <= 2) {
            cout<<1<<"\n";
        } else {
            cout<<((n-3)/x) + 2<<"\n";
        }
    }

    return 0;
}

//Codeforces Problem: Floor Number
//Status: accepted
//Link: https://codeforces.com/problemset/problem/1426/A