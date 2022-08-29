#include<iostream>
using namespace std;

int main () {
    int n, p, q, available = 0;
    cin>>n;
    while (n--) {
        cin>>p>>q;
        if (q - p >= 2) {
            available++;
        }
    }

    cout<<available;
    return 0;
}


//Codeforces Problem: George and Accommodation
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/467/A