#include<iostream>
using namespace std;

int main () {
    int n, m;
    string s;
    cin>>n>>m>>s;
    while (m--) {
        int l, r;
        char c1, c2;
        cin>>l>>r>>c1>>c2;
        for (int i = l-1; i < r; i++) {
            if(s[i] == c1) {
                s[i] = c2;
            }
        }
    }
    cout<<s;
    return 0;
}


//Codeforces Problem: Scarborough Fair
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/897/A