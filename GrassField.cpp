#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, count = 0;
        for (int i = 0; i< 4; i++) {
            cin>>n;
            if (n == 1) {
                count++;
            }
        }

        if (count == 0) {
                cout<<0<<"\n";
            }
            else if (count != 4) {
                cout<<1<<"\n";
            }
            else {
                cout<<2<<"\n";
            }
    }

    return 0;
}


//Codeforces Problem: Grass Field
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/1701/A