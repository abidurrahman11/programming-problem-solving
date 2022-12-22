// Codeforces Problem: Colorful Stamp
// Link: https://codeforces.com/contest/1669/problem/D
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        string s, ans = "YES";
        cin>>n>>s;
        for (int i = 0; i < n; i++) {
            int b = 0, r = 0;
            while (i < n && s[i] == 'W') {
                i++;
            }
            if (i == n){
                break;
            }
            while (i < n && s[i] != 'W') {
                if (s[i] == 'B') {
                    b++;
                } else {
                    r++;
                }
                i++;
            }
            if (b == 0 || r == 0) {
                ans = "NO";
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}