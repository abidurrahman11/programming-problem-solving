// Codeforces Problem: 465A - inc ARG
// Link: https://codeforces.com/problemset/problem/465/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, one = 0;
    cin>>n;
    int orgnl = n;
    while (n--) {
        char a;
        cin>>a;
        if (a == '1') {
            one++;
        } else {
            break;
        }
    }
    if (one == orgnl) {
        cout<<orgnl;
    } else {
        cout<<one + 1;
    }
    return 0;
}