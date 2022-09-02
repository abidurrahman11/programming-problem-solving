#include<iostream>
using namespace std;

int main () {
    int n, count = 0;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        if ((n-i)%i == 0 && n-i != 0) {
            count++;
        }
    }
    cout<<count;
    return 0;
}


//Codeforces Problem: Fafa and his Company
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/935/A