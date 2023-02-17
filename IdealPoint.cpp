// Codeforces Problem: 1795B - Ideal Point
// Link: https://codeforces.com/problemset/problem/1795/B
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, k, lEnd = 0, rEnd = 0;
        cin>>n>>k;
        while (n--) {
            int x, y;
            cin>>x>>y;
            if (x == k) {
                lEnd++;
            }
            if (y == k) {
                rEnd++;
            }
        }
        if (lEnd == 0 || rEnd == 0) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
    return 0;
}