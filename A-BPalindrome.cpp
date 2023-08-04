// Codeforces Problem: 1512C - A-B Palindrome
// Link: https://codeforces.com/problemset/problem/1512/C
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// #include<vector>
// #include<map>
#include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

int main () {
    int t;
    cin>>t;
    while (t--) {
        int a, b;
        cin>>a>>b;
        string s;
        cin>>s;
        int n = a + b;
        for (int i = 0; i < n; i++) {
            if (s[i] == '?') {
                s[i] = s[n - i - 1];
            }
        }
        a -= count (s.begin (), s.end (), '0');
        b -= count (s.begin (), s.end (), '1');
        for (int i = 0; i <= n / 2; i++) {
            if (i != n - i - 1 && s[i] == '?') {
                if (a >= 2) {
                    s[i] = '0';
                    s[n - i - 1] = '0';
                    a -= 2;
                } else if (b >= 2) {
                    s[i] = '1';
                    s[n - i - 1] = '1';
                    b -= 2; 
                }
            } else if (s[i] == '?') {
                if (a) {
                    s[i] = '0';
                    a--;
                } else if (b) {
                    s[i] = '1';
                    b--;
                }
            }
        }
        string tmp = s;
        reverse (tmp.begin (), tmp.end ());
        if ((a == 0 && b == 0) && (s == tmp)) {
            cout<<s<<nl;
        } else {
            cout<<-1<<nl;
        }
    }
    return 0;
}