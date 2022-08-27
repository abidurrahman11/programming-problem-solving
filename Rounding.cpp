#include<iostream>
using namespace std;

int main () {
    long long n;
    cin>>n;
    int mod = n%10;
    if (mod <= 5) {
        n-=mod;
    } else {
        n+=(10-mod);
    }
    cout<<n;
    return 0;
}


//Codeforces Problem: Rounding
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/898/A