// Codeforces Problem: Olesya and Rodion
// Link: https://codeforces.com/contest/584/problem/A
// Status: Accepted      Language: C++#include<iostream>

#include<iostream>
using namespace std;

int main () {
    int n, t;
    cin>>n>>t;
    if (t == 10) {
        if (n == 1) {
            cout<<-1;
        } else {
            cout<<1;
            for (int i = 1; i < n; i++) {
                cout<<0;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            cout<<t;
        }
    }
    return 0;
}