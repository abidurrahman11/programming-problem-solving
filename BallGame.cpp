#include<iostream>
using namespace std;

int main () {
    int n, count = 1;
    cin>>n;
    for (int i = 1; i < n; i++) {
        count += i;
        if (count > n) {
            count -= n;
            cout<<count<<" ";
        } else {
            cout<<count<<" ";
        }
    }
    return 0;
}


//Codeforces Problem: Ball Game
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/46/A