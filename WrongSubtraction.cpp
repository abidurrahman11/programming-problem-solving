#include<iostream>
using namespace std;

int main () {
    int n, k;
    cin>>n>>k;
    for (int i = 1; i <= k; i++) {
        if (n%10 == 0) {
            n /= 10;
        } else {
            n--;
        }
    }
    cout<<n;
    return 0;
}


//Codeforces Problem: Wrong Subtraction
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/977/A