// Codeforces Problem: ICPC Balloons
// Link: https://codeforces.com/problemset/problem/1703/B
// Status: Accepted      Language: C++


#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        set <char> st;
        for (int i = 0; i < n; i++) {
            char c;
            cin>>c;
            st.insert(c);
        }
        cout<<(st.size() * 2) + (n - st.size())<<"\n";
    }
        
    return 0;
}