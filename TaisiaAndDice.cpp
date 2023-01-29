// Codeforces Problem: 1790B - Taisia and Dice
// Link: https://codeforces.com/problemset/problem/1790/B
// Status: Accepted      Language: C++

#include<iostream>
#include<vector>
using namespace std;

// UPSOLVE

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, s, r, i = 0;
        cin>>n>>s>>r;
        int cpN = n - 1;
        int rem = s - r;
        cout<<rem<<" ";
        n--;
        if (r % cpN == 0) {
            while (n--) {
                cout<<r / cpN<<" ";
            }
        } else {
            vector <int> v(n, 1);
            r -= n;
            while (r > 0) {
                if (v[i] < rem) {
                    v[i]++;
                    r--;
                } else {
                    i++;
                }
            }
            for (int a : v) {
                cout<<a<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}