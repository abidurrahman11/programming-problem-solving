// Codeforces Problem: 424A - Squats
// Link: https://codeforces.com/problemset/problem/424/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int smX = 0, cpX = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'x') {
            smX++;
        } else {
            cpX++;
        }
    }
    int ans = (n / 2) - min(smX, cpX);
    cout<<ans<<"\n";
    char l;
    if (smX > cpX) {
        l = 'x';
    } else if (smX < cpX) {
        l = 'X';
    }
    for (int i = 0; i < n; i++) {
        if (l == s[i] && ans > 0) {
            if (l == 'x') {
                cout<<'X';
            } else {
                cout<<'x';
            }
            ans--;
        } else {
            cout<<s[i];
        }
    }
    return 0;
}