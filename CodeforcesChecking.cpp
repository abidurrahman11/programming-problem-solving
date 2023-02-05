// Codeforces Problem: A - Codeforces Checking
// Link: https://codeforces.com/contest/1791/problem/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        char x;
        cin>>x;
        if (x == 'c' || x == 'o' || x == 'd' || x == 'e' || x == 'f' || x == 'r' || x == 's') {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}