// Codeforces Problem: 935B - Fafa and the Gates
// Link: https://codeforces.com/problemset/problem/935/B
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0, x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            x++;
        } else {
            y++;
        }
        if (x == y && s[i + 1] == s[i]) {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}