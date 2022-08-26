#include<iostream>
using namespace std;

int main () {
    long long n;
    cin>>n;
    if (n%3 == 0) {
        cout<<(n/3) * 2;
    } else {
        cout<<((n/3)*2)+1;
    }
    return 0;
}


//Codeforces Problem: Little Artem and Presents
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/669/A