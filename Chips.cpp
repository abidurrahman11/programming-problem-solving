#include<iostream>
using namespace std;

int main () {
    int n, m;
    cin>>n>>m;
    for (int i = 1; i <= n; i++) {
        if (m - i >= 0) {
            m -= i;
        } else {
            break;
        }
        
        if (i == n) {
            i = 0;
        }
    }
    cout<<m;
    return 0;
}


//Codeforces Problem: Chips
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/92/A