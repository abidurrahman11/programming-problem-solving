#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, n;
    cin>>a>>b>>n;
    while (true) {
        n -= __gcd(a, n);
        if (n == 0) {
            cout<<0;
            return 0;
        }
        n -= __gcd(b, n);
        if (n == 0) {
            cout<<1;
            return 0;
        }
    }   
}


//Codeforces Problem: Epic Game
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/119/A