// Codeforces Problem: Yes-Yes?
// Link: https://codeforces.com/problemset/problem/1759/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

void ans () {
    string s, s2 = "";
    cin>>s;
    for (int i = 0; i < 25; i++) {
        s2 += "Yes";
    }
    if (s2.find(s) != string::npos) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        ans();
    }
    return 0;
}