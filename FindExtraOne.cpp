#include<iostream>
using namespace std;

int main () {
    int n, a, b, pos = 0, neg = 0;
    cin>>n;
    while (n--) {
        cin>>a>>b;
        if (a < 0) {
            neg++;
        } else {
            pos++;
        }
    }
    if ((pos == 0 && neg > 0) || (neg == 0 && pos > 0)) {
        cout<<"Yes";
    } else if ((pos == 1 && neg > 0) || (neg == 1 && pos > 0)) {
        cout<<"Yes";
    } else {
        cout<<"No";
    }
    return 0;
}


//Codeforces Problem: Find Extra One
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/900/A