#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i+1; j++) {
                if (j == 0 || j == i) {
                    cout<<1<<" ";
                } else {
                    cout<<0<<" ";
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}


//Codeforces Problem: Bright, Nice, Brilliant
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/1734/B