// Codeforces Problem: Pasha and Stick
// Link: https://codeforces.com/problemset/problem/610/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    long long t;
    cin>>t;
    if (t % 2 != 0) {
        cout<<0;
    } else {
        if (t % 4 == 0) {
            cout<<(t / 4) - 1;
        } else {
            cout<<t/4;
        }
    }
    return 0;
}