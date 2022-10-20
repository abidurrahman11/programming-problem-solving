// Codeforces Problem: Roma and Lucky Numbers
// Link: https://codeforces.com/problemset/problem/262/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, k, ans = 0;
    cin>>n>>k;
    for (int i = 0; i < n; i++) {
        string s;
        cin>>s;
        int lucky = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '4' || s[i] == '7') {
                lucky++;
            }
        }
        if (lucky <= k) {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}