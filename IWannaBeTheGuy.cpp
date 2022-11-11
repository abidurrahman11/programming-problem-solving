// Codeforces Problem: I Wanna Be the Guy
// Link: https://codeforces.com/problemset/problem/469/A
// Status: Accepted      Language: C++

#include<iostream>
#include<set>
using namespace std;

int main () {
    set <int> st;
    int n, p, q;
    cin>>n>>p;
    for (int i = 0; i < p; i++) {
        int x;
        cin>>x;
        st.insert(x);
    }
    cin>>q;
    for (int i = 0; i < q; i++) {
        int y;
        cin>>y;
        st.insert(y);
    }
    if (st.size() == n) {
        cout<<"I become the guy.";
    } else {
        cout<<"Oh, my keyboard!";
    }
    return 0;
}