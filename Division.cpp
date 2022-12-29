// Codeforces Problem: A - Division?
// Link: https://codeforces.com/contest/1669/problem/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n <= 1399) {
            cout<<"Division 4\n";
        } else if (n >= 1400 && n <= 1599) {
            cout<<"Division 3\n";
        } else if (n >= 1600 && n <= 1899) {
            cout<<"Division 2\n";
        } else {
            cout<<"Division 1\n";
        }
    }
    return 0;
}