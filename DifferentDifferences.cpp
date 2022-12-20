// Codeforces Problem: Different Differences
// Link: https://codeforces.com/problemset/problem/1772/C
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int k, n;
        cin>>k>>n;
        if (k == n) {
            for (int i = 1; i <= n; i++) {
                cout<<i<<" ";
            }
            cout<<"\n";
        } else {
            int incr = 1;
            cout<<1<<" ";
            for (int i = 1; i < k; i++) {
                if (k - i <= ((n - incr) - i) + 1) {
                    incr += i;
                    cout<<incr<<" ";
                } else {
                    incr++;
                    cout<<incr<<" ";
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}