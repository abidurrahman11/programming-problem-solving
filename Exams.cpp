// Codeforces Problem: Exams
// Link: https://codeforces.com/problemset/problem/194/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, k;
    cin>>n>>k;
    if (3 * n <= k) {
        cout<<0;
    } else {
        cout<<(3 * n) - k;
    }
    return 0;
}