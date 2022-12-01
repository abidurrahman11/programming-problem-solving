// Codeforces Problem: Contest
// Link: https://codeforces.com/problemset/problem/501/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int misha = max((3 * a) / 10, a - (a / 250) * c);
    int vasya = max((3 * b) / 10, b - (b / 250) * d);
    if (misha > vasya) {
        cout<<"Misha";
    } else if (misha < vasya) {
        cout<<"Vasya";
    } else {
        cout<<"Tie";
    }
    return 0;
}