#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    if (n <= 10 || n > 21) {
        cout<<0;
    } else if (n == 20) {
        cout<<15;
    } else {
        cout<<4;
    }
    return 0;
}


//Codeforces Problem: Blackjack
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/104/A