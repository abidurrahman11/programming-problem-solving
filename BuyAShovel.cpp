#include<iostream>
using namespace std;

int main () {
    int k, r;
    cin>>k>>r;
    for (int i = 1; i <= 1000; i++) {
        if ((i*k)%10 == r) {
            cout<<i;
            break;
        } else if ((i*k)%10 == 0) {
            cout<<i;
            break;
        }
    }
    return 0;
}


//Codeforces Problem: Buy a Shovel
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/732/A