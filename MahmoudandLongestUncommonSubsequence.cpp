// Codeforces Problem: Mahmoud and Longest Uncommon Subsequence
// Link: https://codeforces.com/problemset/problem/766/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    string a, b;
    cin>>a>>b;
    if (a.length() > b.length()) {
        cout<<a.length();
    } else if (a.length() < b.length()) {
        cout<<b.length();
    } else {
        if (a != b) {
            cout<<a.length();
        } else {
            cout<<-1;
        }
    }
    return 0;
}