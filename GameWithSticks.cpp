// Codeforces Problem: Game With Sticks
// Link: https://codeforces.com/problemset/problem/451/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, m;
    cin>>n>>m;
    int points = min(n, m) * min(n, m);
    if (points % 2 == 0) {
        cout<<"Malvika";
    } else {
        cout<<"Akshat";
    }
    return 0;
}