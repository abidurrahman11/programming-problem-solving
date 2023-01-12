// Codeforces Problem: 579A - Raising Bacteria
// Link: https://codeforces.com/problemset/problem/579/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int x, n = 0;
    cin>>x;
    while (x) {
        if (x & 1) {
            n++;
        }
        x = x>>1;
    }
    cout<<n;
    return 0;
}