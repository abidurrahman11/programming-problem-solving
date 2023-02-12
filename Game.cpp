// Codeforces Problem: 984A - Game
// Link: https://codeforces.com/problemset/problem/984/A
// Status: Accepted      Language: C++

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
    sort(arr, arr + n);
    if (n % 2 == 0) {
        cout<<arr[(n / 2) - 1];
    } else {
        cout<<arr[n / 2];
    }
    return 0;
}