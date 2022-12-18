// Codeforces Problem: Buggy Sorting
// Link: https://codeforces.com/problemset/problem/246/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    if (n <= 2) {
        cout<<-1;
    } else {
        int x = n;
        for (int i = 0; i < n; i++) {
            cout<<x<<" ";
            x--;
        }
    }
    return 0;
}