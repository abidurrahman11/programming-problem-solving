#include<iostream>
using namespace std;

int main () {
    int n, i, a = 0, d = 0;
    cin>>n;
    char c;
    for (i = 0; i < n; i++) {
        cin>>c;
        if (c == 'A') {
            a++;
        } else if (c == 'D') {
            d++;
        }
    }

    if (a > d) {
        cout<<"Anton";
    } else if (a < d) {
        cout<<"Danik";
    } else {
        cout<<"Friendship";
    }
    return 0;
}


//Codeforces Problem: Anton and Danik
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/734/A