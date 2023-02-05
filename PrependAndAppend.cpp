// Codeforces Problem: C - Prepend and Append
// Link: https://codeforces.com/contest/1791/problem/C
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, ans = 0;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++) {
            if (ans == n) {
                break;
            }
            if (s[i] == '1' && s[(n - 1) - i] == '0' || s[i] == '0' && s[(n - 1) - i] == '1') {
                ans += 2;
            } else {
                break;
            }
        }
        cout<<n - ans<<"\n";
    }
    return 0;
}