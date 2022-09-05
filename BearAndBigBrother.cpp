#include<iostream>
using namespace std;

int main () {
    int a, b, i =0;
    cin>>a>>b;
    while (a <= b) {
        a *= 3;
        b *= 2;
        i++;
    }
    cout<<i;
    return 0;
}


//Codeforces Problem: Bear and Big Brother
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/791/A