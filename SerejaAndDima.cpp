// Codeforces Problem: Sereja and Dima
// Link: https://codeforces.com/problemset/problem/381/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, s = 0, d = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int left = 0, right = n - 1, serial = 0, max;
    while (left <= right) {
        if (arr[left] >= arr[right]) {
            max  = arr[left];
            left++;
        } else {
            max =  arr[right];
            right--;
        }
        if (serial%2 == 0) {
            s += max;
        } else {
            d += max;
        }
        serial++;
    }
    cout<<s<<" "<<d;
    return 0;
}