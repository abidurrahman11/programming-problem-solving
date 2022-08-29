#include<iostream>
using namespace std;

int main () {
    int n, k;
    cin>>n>>k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) {
                cout<<k<<" ";
            } else {
                cout<<0<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}


//Codeforces Problem: Levko and Table
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/361/A