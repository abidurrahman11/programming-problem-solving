// Codeforces Problem: Wizards and Demonstration
// Link: https://codeforces.com/problemset/problem/168/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, x, y;
    cin>>n>>x>>y;
    int need = (n * y) / 100;
    if ((n * y) % 100 != 0) {
        need += 1;
    }
    if (x >= need) {
        cout<<0;
    } else {
        cout<<need - x;
    }
    return 0;
}