// Codeforces Problem: B - Sort with Step
// Link: https://codeforces.com/contest/1823/problem/B
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, k, grt = 0;
        cin>>n>>k;
        int arr[n + 1];
        for (int i = 1; i <= n; i++) {
            cin>>arr[i];
        }
        for (int i = 1; i <= n; i++) {
            if (abs (arr[i] - i) % k != 0) {
                grt++;
            }
        }
        if (grt == 0) {
            cout<<0<<"\n";
        } else if (grt <= 2) {
            cout<<1<<"\n";
        } else {
            cout<<-1<<"\n";
        }
    }
    return 0;
}