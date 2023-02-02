// Codeforces Problem: A - Flip Flop Sum
// Link: https://codeforces.com/contest/1778/problem/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, add = 1e9;
        cin>>n;
        int arr[n], sum = 0;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            sum += arr[i];
        }
        for (int i = 0; i < n - 1; i++) {
            add = min(add, arr[i] + arr[i + 1]);
        }
        cout<<sum - (2 * add)<<"\n";
    }
    return 0;
}