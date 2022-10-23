// Codeforces Problem: Fox And Snake
// Link: https://codeforces.com/problemset/problem/510/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, m, seq = 1;
    cin>>n>>m;
    for (int i = 1; i <= n; i++) {
        if (i&1) {
            for (int i = 0; i < m; i++) {
                cout<<"#";
            }
            cout<<"\n";
        } else {
            if (seq & 1) {
                for (int i = 0; i < m-1; i++) {
                    cout<<".";
                }
                cout<<"#\n";
                seq++;
            } else {
                cout<<"#";
                for (int i = 0; i < m-1; i++) {
                    cout<<".";
                }
                cout<<"\n";
                seq++;
            }
        }
    }
    return 0;
}