#include<iostream>
using namespace std;

int main () {
    int red, blue;
    cin>>red>>blue;

    int greater = 0, smaller = 0;
    if (red > blue) {
        greater = red;
        smaller = blue;
    } else {
        greater = blue;
        smaller = red;
    }

    int remaining = greater - smaller;
    int sameSocks = remaining/2;

    cout<<smaller<<" "<<sameSocks;
    return 0;
}


//Codeforces Problem: Vasya the Hipster
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/581/A