// Codeforces Problem: A - Musical Puzzle
// Link: https://codeforces.com/contest/1833/problem/A
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
#include<set>
//#include<vector>
//#include<map>
//#include<algorithm>
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        set <string> st;
        int len = s.size();
        for (int i = 0; i < n - 1; i++) {
            string sbstr = "";
            sbstr += s[i];
            sbstr += s[i + 1];
            st.insert (sbstr);
        }
        cout<<st.size()<<nl;
    }
    return 0;
}