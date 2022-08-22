#include<iostream>
using namespace std;

int main () {
    long long n;
    cin>>n;
    if (n%2 == 0) {
        cout<<n/2;
    } else {
        cout<<(n+1) / (-2);
    }
    return 0;
}


//Codeforces Problem: Calculating Function
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/486/A