#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        if (i%2 != 0) {
            cout<<"I hate ";
        } else {
            cout<<"I love ";
        }

        if (i != n) {
            cout<<"that ";
        } else {
            cout<<"it";
        }
    }
    return 0;
}


//Codeforces Problem: Hulk
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/705/A