// Codeforces Problem: 807A - Is it rated?
// Link: https://codeforces.com/problemset/problem/807/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, a, b, rated = 0, unrated = 0, last = 10000;
    cin>>n;
    while (n--) {
        cin>>a>>b;
        if (a != b) {
            rated = 1;
        }
        if (last > a) {
            last = a;
        }
        if (a > last) {
            unrated = 1;
        }
    }
    if (rated) {
        cout<<"rated";
    } else if (unrated) {
        cout<<"unrated";
    } else {
        cout<<"maybe";
    }
    return 0;
}