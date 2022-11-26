// Codeforces Problem: Let's Watch Football
// Link: https://codeforces.com/problemset/problem/195/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int a, b, c;
    cin>>a>>b>>c;
    int time = (a * c) - (b * c);
    if (time%b == 0) {
        cout<<time / b;
    } else {
        cout<<(time / b) + 1;
    }

    return 0;
}