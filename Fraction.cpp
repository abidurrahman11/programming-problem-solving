#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i = n/2; i >= 1; i--) {
        if (__gcd(i, n-i) == 1) {
            cout<<i<<" "<<n-i;
            return 0;
        }
    }
}


//Codeforces Problem: Fraction
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/854/A