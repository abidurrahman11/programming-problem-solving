// Codeforces Problem: Wizards' Duel
// Link: https://codeforces.com/contest/591/problem/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    float l, p, q;
    cin>>l>>p>>q;
    float speed = l / (p + q);
    float ans = p * speed;
    cout<<ans;
    return 0;
}