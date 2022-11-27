// Codeforces Problem: Dreamoon and Stairs
// Link: https://codeforces.com/problemset/problem/476/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, m;
    cin>>n>>m;
    if (n < m) {
        cout<<-1;
    } else {
        int move;
        if (n % 2 == 0) {
            move = n / 2;
        } else {
            move = (n / 2) + 1;
        }
        while (move % m) {
            move++;
        }
        cout<<move;
    }
    return 0;
}