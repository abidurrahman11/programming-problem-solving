// Codeforces Problem: Drazil and Date
// Link: https://codeforces.com/problemset/problem/515/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    long long a, b, s;
    cin>>a>>b>>s;
    int stps = abs(a) + abs(b);
    if (stps == s) {
        cout<<"Yes";
    } else if (stps < s && (s - stps) % 2 == 0) {
        cout<<"Yes";
    } else {
        cout<<"No";
    }
    return 0;
}