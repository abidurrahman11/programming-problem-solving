// Codeforces Problem: XOR = Average
// Link: https://codeforces.com/problemset/problem/1758/B
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n%2 == 1) {
            for (int i = 0; i < n; i++) {
                cout<<7<<" ";
            }
        } else {
            cout<<"1 3 ";
            for (int i = 0; i < n - 2; i++) {
                cout<<"2 ";
            }
        }
        cout<<"\n";
    }
    return 0;
}