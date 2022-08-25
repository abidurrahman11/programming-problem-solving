#include<iostream>
using namespace std;

int main () {
    int y, w;
    cin>>y>>w;

    int max;
    if (y > w) {
        max = y;
    } else {
        max = w;
    }

    int chances = (6 - (max - 1));

    if (chances%2 == 1) {
        if (chances == 3) {
            cout<<"1/2";
        } else {
            cout<<chances<<"/"<<6;
        }
    } else {
        if (chances == 4) {
            cout<<"2/3";
        } else {
            cout<<1<<"/"<<6/chances;
        }
    }

    return 0;
}


//Codeforces Problem: Die Roll
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/9/A