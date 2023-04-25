// Codeforces Problem: A - TubeTube Feed
// Link: https://codeforces.com/contest/1822/problem/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int q;
    cin>>q;
    while (q--) {
        int n, t;
        cin>>n>>t;
        int arr[n], arr2[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++) {
            cin>>arr2[i];
        }
        int ans = -1, maxi = 0;
        for (int i = 0; i < n; i++) {
            if ((t - i) >= arr[i]) {
                if (arr2[i] > maxi) {
                    maxi = arr2[i];
                    ans = i + 1;
                }
            }
        } 
        cout<<ans<<"\n";
    }
    return 0;
}