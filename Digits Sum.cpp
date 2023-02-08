// Codeforces Problem: 1553A - Digits Sum
// Link: https://codeforces.com/problemset/problem/1553/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n % 10 == 9) {
            cout<<(n / 10) + 1<<"\n";
        } else {
            cout<<n / 10<<"\n";
        }
    }
    return 0;
}