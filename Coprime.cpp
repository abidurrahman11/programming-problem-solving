// Codeforces Problem: 1742D - Coprime
// Link: https://codeforces.com/problemset/problem/1742/D
// Status: Accepted      Language: C++

#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int arr[1001] ={0};
        int n, elm;
        cin>>n;
        for (int i = 1; i <= n; i++) {
            cin>>elm;
            arr[elm] = i;
        }
        int ans = -1;
        for (int i = 1; i <= 1000; i++) {
            for (int j = i; j <= 1000; j++) {
                if (arr[i] > 0 && arr[j] > 0) {
                    if (__gcd(i, j) == 1) {
                        ans = max (ans, arr[i] + arr[j]);
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}