// Codeforces Problem: Advantage
// Link: https://codeforces.com/problemset/problem/1760/C
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

void ans () {
    int n;
    cin>>n;
    int arr[n], arr2[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2, arr2 + n);
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr2[n - 1]) {
            cout<<arr2[n - 1] - arr2[n - 2]<<" ";
        } else {
            cout<<arr[i] - arr2[n - 1]<<" ";
        }
    }
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        ans();
        cout<<"\n";
    }
    return 0;
}