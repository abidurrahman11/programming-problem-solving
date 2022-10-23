// Codeforces Problem: Police Recruits
// Link: https://codeforces.com/problemset/problem/427/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, p = 0, c = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        if (x > 0) {
            p += x;
        } else if (x == -1 && p <= 0) {
            c++;
        } else {
            p--;
        }
    }
    cout<<c;
    return 0;
}