// Codeforces Problem: 782A - Andryusha and Socks
// Link: https://codeforces.com/problemset/problem/782/A
// Status: Accepted      Language: C++

#include<iostream>
#include<unordered_set>
using namespace std;

int main () {
    int n, ans = 0;
    cin>>n;
    unordered_set <int> st; 
    for (int i = 0; i < n + n; i++) {
        int x;
        cin>>x;
        if (st.find(x) == st.end()) {
            st.insert(x);
        } else {
            int sz = st.size();
            ans = max (ans, sz);
            st.erase(x);
        }
    }
    cout<<ans;
    return 0;
}