#include<iostream>
using namespace std;

int main () {
    int k, n, w;
    cin>>k>>n>>w;

    int total = 0;

    for (int i = 1; i <= w; i++) {
        int cost = k * i;
        total+=cost;
    }

    if (total > n) {
        cout<<total - n;
    } else {
        cout<<0;
    }
    return 0;
}

//Codeforces Problem:
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/546/A