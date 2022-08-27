#include<iostream>
using namespace std;

int main () {
    int m, d;
    cin>>m>>d;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d == 6 || d == 7) {
            cout<<6;
        } else {
            cout<<5;
        }
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d == 7) {
            cout<<6;
        } else {
            cout<<5;
        }
    } else if (m == 2) {
        if (d == 1) {
            cout<<4;
        } else {
            cout<<5;
        }
    }
    return 0;
}


//Codeforces Problem: Petr and a calendar
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/760/A