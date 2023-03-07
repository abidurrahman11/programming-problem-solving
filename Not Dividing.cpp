// Codeforces Problem: 1794B - Not Dividing
// Link: https://codeforces.com/problemset/problem/1794/B
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] == 1) {
                arr[i]++;
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] % arr[i] == 0) {
                arr[i + 1]++;
            }
        }
        for (int i = 0; i < n; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}