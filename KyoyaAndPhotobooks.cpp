// Codeforces Problem: 554A - Kyoya and Photobooks
// Link: https://codeforces.com/problemset/problem/554/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin>>s;
    set <string> st;
    for (int i = 0; i <= s.length(); i++) {
        for (char j = 'a'; j <= 'z'; j++) {
            st.insert(s.substr(0, i) + j + s.substr(i));
        }
    }
    cout<<st.size();
    return 0;
}