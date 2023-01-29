// Codeforces Problem: 474A - Keyboard
// Link: https://codeforces.com/problemset/problem/474/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    char shift;
    string s, s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>shift>>s;
    for (int i = 0; i < s.length(); i++) {
        int pos = s1.find(s[i]);
        if (shift == 'R') {
            cout<<s1[pos - 1];
        } else {
            cout<<s1[pos + 1];
        }
    }
    return 0;
}