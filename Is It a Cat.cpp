// Codeforces Problem: 1800A - Is It a Cat?
// Link: https://codeforces.com/problemset/problem/1800/A
// Status: Accepted      Language: C++

#include<iostream>
#include<cctype>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        string s, ans = "";
        cin>>n>>s;
        int len = s.length();
        for (int i = 0; i < len; i++) {
            ans += tolower(s[i]);
            while (tolower(s[i]) == tolower(s[i + 1])) {
                i++;
            }
        }
        if (ans == "meow") {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}