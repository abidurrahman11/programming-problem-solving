// Codeforces Problem: SSeeeeiinngg DDoouubbllee
// Link: https://codeforces.com/problemset/problem/1758/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        cout<<s;
        for (int i = s.length() - 1; i >= 0; i--) {
            cout <<s[i];
        }
        cout<<"\n";
    }
    return 0;
}