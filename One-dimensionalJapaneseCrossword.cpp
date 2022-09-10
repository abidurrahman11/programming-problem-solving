#include<iostream>
#include<vector>
using namespace std;

int main () {
    int n, b = 0;
    cin>>n;
    string s;
    cin>>s;
    vector <int> v;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            b++;
        }

        if (s[i + 1] != 'B' && b != 0) {
            v.push_back(b);
            b = 0;
        }
    }
    if (v.size() != 0) {
        cout<<v.size()<<"\n";
        for (int j: v) {
            cout<<j<<" ";
        }
    } else {
        cout<<0;
    }
    return 0;
}


//Codeforces Problem: One-dimensional Japanese Crossword
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/721/A