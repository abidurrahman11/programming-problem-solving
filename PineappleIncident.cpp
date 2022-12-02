// Codeforces Problem: Pineapple Incident
// Link: https://codeforces.com/problemset/problem/697/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    long long t, s, x;
    cin>>t>>s>>x;
    if (t == x) {
        cout<<"YES";
        return 0;
    }
    for (long long i = t + s; i <= x; i += s) {
        if (i == x || i + 1 == x) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}