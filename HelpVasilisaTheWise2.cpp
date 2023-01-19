// Codeforces Problem: 143A - Help Vasilisa the Wise 2
// Link: https://codeforces.com/problemset/problem/143/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int r1, r2, c1, c2, d1, d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int a = (c1 + d1 - r2) / 2;
    int b = c1 - a;
    int c = r1 - a;
    int d = r2 - b;
    if ((a != b && a != c && a != d && b != c && b != d && c != d) && (a && b && c && d) && (a <= 9 && b <= 9 && c <= 9 && d <= 9)) {
        cout<<a<<" "<<c<<"\n"<<b<<" "<<d;
    } else {
        cout<<-1;
    }
    return 0;
}