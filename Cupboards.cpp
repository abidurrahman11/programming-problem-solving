#include<iostream>
#include<cstdlib>
using namespace std;

int main () {
    int t;
    cin>>t;
    int l1 = 0, l0 = 0, r1 = 0, r0 = 0;
    while (t--) {
        int l, r;
        cin>>l>>r;
        if (l == 1) {
            l1++;
        } else {
            l0++;
        }

        if (r == 1) {
            r1++;
        } else {
            r0++;
        }
    }
    cout<<min(l1, l0) + min(r1, r0);
    return 0;
}


//Codeforces Problem: Cupboards
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/248/A