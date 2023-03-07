// Codeforces Problem: 1794A - Prefix and Suffix Array
// Link: https://codeforces.com/problemset/problem/1794/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string str = "", ans = "YES";
        for (int i = 0; i < (2 * n) - 2; i++) {
            string s;
            cin>>s;
            if (s.size() == n - 1) {
                str += s;
            }
        }
        int sz = str.size();
        for (int i = 0; i < sz / 2; i++) {
            if (str[i] != str[(sz - 1) - i]) {
                ans = "NO";
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}