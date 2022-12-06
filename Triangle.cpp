// Codeforces Problem: Triangle
// Link: https://codeforces.com/problemset/problem/6/A
// Status: Accepted      Language: C++

#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin>>arr[i];
    }
    sort(arr, arr + 4);
    if (arr[0] + arr[1] > arr[2] ||arr[1] + arr[2] > arr[3]) {
        cout<<"TRIANGLE";
    } else if (arr[0] + arr[1] == arr[2] || arr[1] + arr[2] == arr[3]) {
        cout<<"SEGMENT";
    } else {
        cout<<"IMPOSSIBLE";
    }
    return 0;
}