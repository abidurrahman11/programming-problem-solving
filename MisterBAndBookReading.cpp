// Codeforces Problem: 820A - Mister B and Book Reading
// Link: https://codeforces.com/problemset/problem/820/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int c, v0, v1, a, l;
    cin>>c>>v0>>v1>>a>>l;
    int curPg = v0, day = 1, rest = v0;
    while (c > rest) {
        curPg = min(v1, curPg + a);
        rest = rest + curPg - l;
        day++;
    }
    cout<<day;
    return 0;
}