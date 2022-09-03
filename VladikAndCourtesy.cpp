#include<iostream>
using namespace std;

int main () {
    long long a, b, i = 0;
    cin>>a>>b;
    while (a >= 0 && b >= 0) {
        i++;
        if (i%2 == 0) {
            b -= i;
        } else {
            a -= i;
        }
    }
    if (i%2 == 0) {
        cout<<"Valera";
    } else {
        cout<<"Vladik";
    }
    return 0;
}


//Codeforces Problem: Vladik and Courtesy
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/811/A