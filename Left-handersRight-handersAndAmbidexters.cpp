#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int l, r, a;
    cin>>l>>r>>a;
    
    while (a) {
        if (l < r) {
            l++;
        } else {
            r++;
        }
        a--;
    }
    cout<<min(l, r)*2;
    return 0;
}


//Codeforces Problem: Left-handers, Right-handers and Ambidexters
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/950/A