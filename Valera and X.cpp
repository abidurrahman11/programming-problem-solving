// Codeforces Problem: 404A - Valera and X
// Link: https://codeforces.com/problemset/problem/404/A
// Status: Accepted      Language: C++

#include<iostream>
#include<unordered_set>
using namespace std;

int main () {
    int n, idx = 0;;
    cin>>n;
    bool ans = true;
    unordered_set <char> st1;
    unordered_set <char> st2;
    for (int i = 0; i < n; i++) {
        string s;
        cin>>s;
        if (s[idx] == s[idx + 1]) {
            ans = false;
        }
        for (int i = 0; i < n; i++) {
            if (i == idx || i == (n - 1) - idx) {
                st1.insert(s[i]);
            } else {
                st2.insert(s[i]);
            }
        }
        idx++;
    }
    if (st1.size() == 1 && st2.size() == 1 && ans) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}