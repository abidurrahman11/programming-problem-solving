// Codeforces Problem: Matrix Rotation
// Link: https://codeforces.com/problemset/problem/1772/B
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if (a < b && a < c && d > b && d > c) {
            cout<<"YES\n";
        } else if (c < a && c < d && b > a && b > d) {
            cout<<"YES\n";
        } else if (b < a && b < d && c > a && c > d) {
            cout<<"YES\n";
        } else if (d < b && d < c && a > b && a > c) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}