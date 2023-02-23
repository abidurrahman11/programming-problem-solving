// Codeforces Problem: 545A - Toy Cars
// Link: https://codeforces.com/problemset/problem/545/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, ans = 0;
    cin>>n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin>>x;
            if (x == 1) {
                arr[i] = 1;
            } else if (x == 2) {
                arr[j] = 1;
            } else if (x == 3) {
                arr[i] = 1;
                arr[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            ans++;
        }
    }
    cout<<ans<<"\n";
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            cout<<i + 1<<" ";
        }
    }
    return 0;
}