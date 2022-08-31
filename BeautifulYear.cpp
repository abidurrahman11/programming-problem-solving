#include<iostream>
using namespace std;

int main () {
    int y, d1, d2, d3, d4;
    cin>>y;
    while (y) {
        y++;
        d1 = y/1000;
        d2 = (y%1000)/100;
        d3 = ((y%1000)%100)/10;
        d4 = ((y%1000)%100)%10;

        if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4) {
            cout<<y;
            break;
        }
    }
    return 0;
}


//Codeforces Problem: Beautiful Year
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/271/A