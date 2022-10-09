#include<iostream>
using namespace std;

int main () {
    int n, init = 1;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = init;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            arr[j] += init;
            init = arr[j];
            if (j == n - 1) {
                init = 1;
            }
        }
    }
    cout<<arr[n-1];
    return 0;
}


//Codeforces Problem: Maximum in Table
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/509/A