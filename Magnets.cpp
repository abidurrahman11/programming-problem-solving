#include<iostream>
using namespace std;

int main () {
    int n, i, groups = 0;
    cin>>n;
    int arr[n];

    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for (i = 0; i < n; i++) {
        if (arr[i] != arr[i+1]) {
            groups++;
        }
    }

    cout<<groups;
    return 0;
}


//Codeforces Problem: Magnets
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/344/A