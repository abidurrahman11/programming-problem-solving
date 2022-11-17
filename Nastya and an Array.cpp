// Codeforces Problem: Nastya and an Array
// Link: https://codeforces.com/problemset/problem/992/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    set <int> st;
    while (n--) {
        int x;
        cin>>x;
        if (x != 0) {
            st.insert(x);
        }
    }
    cout<<st.size();
    return 0;
}