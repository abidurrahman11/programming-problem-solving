// Codeforces Problem: 745A - Hongcow Learns the Cyclic Shift
// Link:https://codeforces.com/problemset/problem/745/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin>>s;
    set <string> st;
    int sz = s.length();
    st.insert(s);
    string s2 = s;
    for (int i = 0; i < sz; i++) {
        string newStr;
        newStr = s2[sz - 1] + s2.substr(0, sz - 1);
        st.insert(newStr);
        s2 = newStr;
    }
    cout<<st.size();
    return 0;
}