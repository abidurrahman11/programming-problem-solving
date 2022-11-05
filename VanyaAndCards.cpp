// Codeforces Problem: Vanya and Cards
// Link: https://codeforces.com/problemset/problem/401/A
// Status: Accepted      Language: C++

#include<iostream>
#include<cmath>
using namespace std;

int main () {
    int n, x, pos = 0, neg = 0;
    cin>>n>>x;
    for (int i = 0; i < n; i++) {
        int a;
        cin>>a;
        if (a > 0) {
            pos += a;
        } else {
            neg += a;
        }
    }
    int dif = abs(pos - abs(neg));
    if (dif % x == 0) {
        cout<<dif / x;
    } else {
        cout<<(dif / x) + 1;
    }
    return 0;
}