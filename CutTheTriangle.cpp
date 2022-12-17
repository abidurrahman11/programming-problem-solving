// Codeforces Problem: Cut the Triangle
// Link: https://codeforces.com/problemset/problem/1767/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        long long x1, x2, y1, y2, z1, z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        if (x1 != y1 && x1 != z1 && y1 != z1) {
            cout<<"YES\n";
        } else if (x2 != y2 && x2 != z2 && y2 != z2) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}