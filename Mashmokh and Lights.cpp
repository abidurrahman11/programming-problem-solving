// Codeforces Problem: 415A - Mashmokh and Lights
// Link: https://codeforces.com/problemset/problem/415/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, m;
    cin>>n>>m;
    int arr[n + 1] = {0};
    for (int i = 0; i < m; i++) {
        int x;
        cin>>x;
        int cpX = x;
        while (arr[x] == 0 && x <= n + 1) {
            arr[x] = cpX;
            x++;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout<< arr[i]<<" ";
    }
    return 0;
}