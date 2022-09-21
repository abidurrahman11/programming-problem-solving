#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int maximum = 0;
    for (int i = 0; i < n; i++) {
        int current = 0;
        for (int j = i; j < n; j++) {
            current = current ^ arr[j];
            maximum = max(current, maximum);
        }
    }
    cout<<maximum;
    return 0;
}



//Codeforces Problem: Little Xor
//Status: Accepted
//Link: https://codeforces.com/contest/252/problem/A