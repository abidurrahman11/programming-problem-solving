// Codeforces Problem: 1795A - Two Towers
// Link: https://codeforces.com/problemset/problem/1795/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, m, sOne = 0, sTwo = 0;
        string s1, s2;
        cin>>n>>m>>s1>>s2;
        for (int i = 0; i < n - 1; i++) {
            if (s1[i] == s1[i + 1]) {
                sOne++;
            }
        }
        for (int i = 0; i < m - 1; i++) {
            if (s2[i] == s2[i + 1]) {
                sTwo++;
            }
        }
        if (sOne == 0 && sTwo == 0) {
            cout<<"YES\n";
        } else if (sOne == 1 && sTwo == 0 && s1[n - 1] != s2[m - 1]) {
            cout<<"YES\n";
        } else if (sTwo == 1 && sOne == 0 && s1[n - 1] != s2[m - 1]) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}