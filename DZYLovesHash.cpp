// Codeforces Problem: DZY Loves Hash
// Link: https://codeforces.com/problemset/problem/447/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int p, n, ans = 0;
    cin>>p>>n;
    int arr[p];
    for (int i = 0; i < p; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        long long x;
        cin>>x;
        if (arr[x%p] == 0) {
            arr[x%p] = 1;
        } else if (!ans) {
            ans = i + 1;
        }
    }
    if (ans) {
        cout<<ans;
    } else {
        cout<<-1;
    }
    return 0;
}