// Codeforces Problem: 1820A - Yura's New Name
// Link: https://codeforces.com/problemset/problem/1820/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int len  = s.length(), ext = 0, uSc = 0;
        if (s[0] == '_') {
            ext++;
        }
        if (s[len - 1] == '_') {
            ext++;
        }
        if (s == "^") {
            cout<<1<<"\n";
            continue;
        }
        for (int i = 0; i < len - 1; i++) {
            if (s[i] == '_' && s[i + 1] == '_') {
                uSc++;
            }
        }
        cout<<uSc + ext<<"\n";
    }
    return 0;
}