// Codeforces Problem: The number of positions
// Link: https://codeforces.com/problemset/problem/124/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, a, b;
    cin>>n>>a>>b;
    cout<<min(n - a, b + 1);
    return 0;
}