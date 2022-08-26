#include<iostream>
using namespace std;

int main () {
    int n, i;
    cin>>n;
    int maximum = n/2;
    cout<<maximum<<"\n";
    for (i = 1; i <= maximum-1; i++) {
        cout<<2<<" ";
    }
    if (n%2 == 0) {
        cout<<2;
    } else {
        cout<<3;
    }
    return 0;
}


//Codeforces Problem: Bachgold Problem
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/749/A