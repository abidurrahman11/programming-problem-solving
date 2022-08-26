#include<iostream>
using namespace std;

int main () {
    int n, i, initial = 0;
    cin>>n;
    for (i = 0; i <= n; i++) {
        initial+=i;
        if (initial == n) {
            cout<<"YES";
            break;
        } else if (initial > n) {
            cout<<"NO";
            break;
        }
    }
    return 0;
}


//Codeforces Problem: Triangular numbers
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/47/A