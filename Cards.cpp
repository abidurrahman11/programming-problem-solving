// Codeforces Problem: Cards
// Link: https://codeforces.com/problemset/problem/701/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, total = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        total += arr[i];
    }
    int cnt = n/2;
    int sn = total / cnt;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == sn) {
                cout<<i+1<<" "<<j+1<<"\n";
                arr[i] = 0;
                arr[j] = 0;
            }
        }
    }
    return 0;
}