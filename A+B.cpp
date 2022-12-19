// Codeforces Problem: A+B?
// Link: https://codeforces.com/problemset/problem/1772/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        char ch1 = s[0];
        char ch2 = s[2];
        cout<<int(ch1 - '0') + int(ch2 - '0')<<"\n";
    }
    return 0;
}