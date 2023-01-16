// Codeforces Problem: 577A - Multiplication Table
// Link: https://codeforces.com/problemset/problem/577/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, x, tot = 0;
    cin>>n>>x;
    for (int i = 1; i <= n; i++) {
        if (x % i == 0 && x / i <= n) {
            tot++;
        }
    }
    cout<<tot;
    return 0;
}