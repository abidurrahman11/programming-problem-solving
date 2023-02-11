// Codeforces Problem: 259A - Little Elephant and Chess
// Link: https://codeforces.com/problemset/problem/259/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t = 8;
    bool pos = true;
    while (t--) {
        int b = 0, w = 0;
        char prev = 'x';
        for (int i = 0; i < 8; i++) {
            char c;
            cin>>c;
            if (prev == c) {
                pos = false;
            }
            if (c == 'B') {
                b++;
            } else {
                w++;
            }
            prev = c;
        }
        if (b < 4 || w < 4) {
            pos = false;
        }
    }
    if (pos) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
    return 0;
}