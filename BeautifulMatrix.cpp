#include<iostream>
#include<cmath>
using namespace std;

int main () {
    int x;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin>>x;
            if (x == 1) {
                cout<<abs(i - 3) + abs(j - 3);
                return 0;
            }
        }
    }
    return 0;
}


//Codeforces Problem: Beautiful Matrix
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/263/A