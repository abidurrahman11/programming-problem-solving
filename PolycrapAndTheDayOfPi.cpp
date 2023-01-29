// Codeforces Problem: 1790A - Polycarp and the Day of Pi	
// Link: https://codeforces.com/problemset/problem/1790/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        string s, s2 = "314159265358979323846264338327";
        cin>>s;
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == s2[i]) {
                ans++;
            } else {
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}