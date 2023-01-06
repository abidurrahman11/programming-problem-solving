// Codeforces Problem: 1676A - Lucky?
// Link: https://codeforces.com/problemset/problem/1676/A
// Status: Accepted      Language: C++#include<iostream>

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        char a, b, c, d, e, f;
        cin>>a>>b>>c>>d>>e>>f;
        if (a + b + c == d + e + f) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}