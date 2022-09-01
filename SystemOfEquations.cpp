#include<iostream>
using namespace std;

int main () {
    int n, m, ans = 0;
    cin>>n>>m;
    for (int i = 0; i*i <= n; i++) {
        int b = n - i*i;
        if (i+b*b == m) {
            ans+=1;
        }
    }
    cout<<ans;
    return 0;
}


//Codeforces Problem: System of Equations
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/214/A