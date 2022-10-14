#include<iostream>
using namespace std;

int main () {
    int n, h;
    cin>>n>>h;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin>>a;
        if (a <= h) {
            ans++;
        } else {
            ans += 2;
        }
    }
    cout<<ans;
    return 0;
}


//Codeforces Problem: Vanya and Fence
//Link: https://codeforces.com/problemset/problem/677/A
//Status: Accepted      Language: C++