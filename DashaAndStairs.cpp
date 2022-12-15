// Codeforces Problem: Dasha and Stairs
// Link: https://codeforces.com/contest/761/problem/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int a, b;
    cin>>a>>b;
    if (a == 0 && b == 0) {
        cout<<"NO";
    } else if (a == b || b - a == 1 || a - b == 1) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}