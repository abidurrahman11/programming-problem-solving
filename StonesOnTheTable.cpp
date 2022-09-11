#include<iostream>
using namespace std;

int main () {
    int n, i, replace = 0;
    cin>>n;
    string s;
    cin>>s;

    for (i = 0; i < s.size(); i++) {
        if (s[i] == s[i + 1]) {
            replace++;
        }
    }
    cout<<replace;
    return 0;
}


//Codeforces Problem: Stones on the Table
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/266/A