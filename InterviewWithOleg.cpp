// Codeforces Problem: 738A - Interview with Oleg
// Link: https://codeforces.com/problemset/problem/738/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n;
    string s;
    cin>>n>>s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') {
            if (i + 2 < n && s[i + 1] == 'g' && s[i + 2] == 'o') {
                while (i + 2 < n && s[i + 1] == 'g' && s[i + 2] == 'o') {
                    i += 2;
                }
                cout<<"***";
            } else {
                cout<<s[i];
            }
        } else {
            cout<<s[i];
        }
    }
    return 0;
}