// Codeforces Problem: 208A - Dubstep
// Link: https://codeforces.com/problemset/problem/208/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    string s;
    cin>>s;
    int len = s.length();
    char space = 'x';
    for (int i = 0; i < len; i++) {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            while (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
                i += 2;
            }
            space = ' ';
        }
        else {
            if (space == ' ') {
                cout<<space;
            }
            cout<<s[i];
            space = 'x';
        }
    }
    return 0;
}