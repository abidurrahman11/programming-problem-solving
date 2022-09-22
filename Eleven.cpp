#include<iostream>
#include<map>
using namespace std;

int main () {
    int n, temp, e1 = 1, e2 = 1;
    cin>>n;
    map <int, bool> fib;
    while (e1 <= n) {
        fib[e1] = true;
        fib[e2] = true;
        temp = e1 + e2;
        e1 = e2;
        e2 = temp;
    }
    for (int i = 1; i <= n; i++) {
        if (fib[i] == true) {
            cout<<"O";
        } else {
            cout<<"o";
        }
    }
    return 0;
}


//Codeforces Problem: Eleven
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/918/A