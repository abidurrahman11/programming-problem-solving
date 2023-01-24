// Codeforces Problem: 320A - Magic Numbers
// Link: https://codeforces.com/problemset/problem/320/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    string s;
    cin>>s;
    int ln = s.length(), isOne = 0, four = 0;
    for (int i = 0; i < ln; i++) {
        if (s[i] != '1' && s[i] != '4') {
            cout<<"NO";
            return 0;
        }
        if (s[i] == '1') {
            isOne = 1;
            four = 0;
        } else if (s[i] == '4') {
            four++;
        }
        if (isOne == 0 || four >= 3) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}