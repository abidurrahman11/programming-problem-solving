// Codeforces Problem: 1822D - Super-Permutation
// Link: https://codeforces.com/problemset/problem/1822/D
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n == 1) {
            cout<<1<<"\n";
        } else if (n & 1) {
            cout<<-1<<"\n";
        } else {
            for (int i = 0; i < n; i++) {
                if (!(i & 1)) {
                    cout<<n - i<<" ";
                } else {
                    cout<<i<<" ";
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}