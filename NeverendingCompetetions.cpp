// Codeforces Problem: 765A - Neverending competitions
// Link: https://codeforces.com/problemset/problem/765/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int cN = n;
    string s;
    cin>>s;
    while (cN--) {
        string s2;
        cin>>s2;
    }
    if (n&1) {
        cout<<"contest";
    } else {
        cout<<"home";
    }
    return 0;
}