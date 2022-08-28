#include<iostream>
using namespace std;

int main () {
    long long n, m, a;
    cin>>n>>m>>a;
    long long x = n/a;
    long long y = m/a;

    if (n%a != 0) {
        x = x + 1;
    }
    if (m%a != 0) {
        y = y + 1;
    }

    cout<<x * y;
    return 0;
}


//Codeforces Problem: Theatre Square
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/1/A