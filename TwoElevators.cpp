#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        long long a, b, c, f, s;
        cin>>a>>b>>c;
        f = a - 1;
        if (b > c) {
            s = b - 1;
        } else {
            s = (c - b) + (c - 1);
        }

        if (f < s) {
            cout<<1<<"\n";
        } else if (f > s) {
            cout<<2<<"\n";
        } else {
            cout<<3<<"\n";
        }
    }
    return 0;
}


//Codeforces Problem: Two Elevators
//Status: Accepted
//Link: https://codeforces.com/contest/1729/problem/A