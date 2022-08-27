#include<iostream>
#include<cmath>
using namespace std;

int main () {
    int a, b, aWin = 0, bWin= 0, Draw = 0;
    cin>>a>>b;
    for (int i = 1; i <= 6; i++) {
        if (abs(i - a) < abs(i - b)) {
            aWin++;
        } else if (abs(i - a) > abs(i - b)) {
            bWin++;
        } else {
            Draw++;
        }
    }

    cout<<aWin<<" "<<Draw<<" "<<bWin;
    return 0;
}


//Codeforces Problem: Playing with Dice
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/378/A