// Codeforces Problem: B - Following Directions
// Link: https://codeforces.com/contest/1791/problem/B
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s, ans = "NO";
        cin>>s;
        int x = 0, y = 0, len = s.length();
        for (int i = 0; i < len; i++) {
            if (s[i] == 'U') {
                x++;
            } else if (s[i] == 'D') {
                x--;
            } else if (s[i] == 'R') {
                y++;
            } else {
                y--;
            }
            if (x == 1 && y == 1) {
                ans = "YES";
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}