// Codeforces Problem: B - Serval and Inversion Magic
// Link: https://codeforces.com/contest/1789/problem/B
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        string s, ans = "Yes";
        cin>>n>>s;
        int count = 0;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] == s[(n - 1) - i]) {
                if (count == 1) {
                    count = 2;
                }
            } else {
                if (count == 2) {
                    ans = "No";
                    break;
                }
                count = 1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}