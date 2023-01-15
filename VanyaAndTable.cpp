// Codeforces Problem: 552A - Vanya and Table
// Link: https://codeforces.com/problemset/problem/552/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, tot = 0;
    cin>>n;
    while (n--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        tot += ((c - a + 1) * (d - b + 1));
    }
    cout<<tot;
    return 0;
}