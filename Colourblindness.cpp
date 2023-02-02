// Codeforces Problem: B - Colourblindness
// Link: https://codeforces.com/contest/1722/problem/B
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, r1 = 0, r2 = 0;
        cin>>n;
        string s1, s2, ans = "YES";
        cin>>s1>>s2;
        for (int i = 0; i < n; i++) {
            if (s1[i] == 'R' && s2[i] != 'R' || s2[i] == 'R' && s1[i] != 'R') {
                ans = "NO";
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}