// Codeforces Problem: Round House
// Link: https://codeforces.com/contest/659/problem/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b;
    cin>>n>>a>>b;
    int rounds = (n + (b % n) + a) % n;
    if (rounds == 0) {
        cout<<n;
    } else {
        cout<<rounds;
    }
    return 0;
}