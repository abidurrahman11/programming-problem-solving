// Codeforces Problem: 1363C - Game On Leaves
// Link: https://codeforces.com/problemset/problem/1363/C
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, x, node = 0;
        cin>>n>>x;
        if (n == 1) {
            cout<<"Ayush\n";
            continue;
        }
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin>>u>>v;
            if (u == x || v == x) {
                node++;
            }
        }
        if (n % 2 == 0 || node == 1) {
            cout<<"Ayush\n";
        } else {
            cout<<"Ashish\n";
        }
    }
    return 0;
}