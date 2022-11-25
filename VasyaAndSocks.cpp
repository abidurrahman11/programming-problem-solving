// Codeforces Problem: Vasya and Socks
// Link: Vasya and Socks
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, m;
    cin>>n>>m;
    for (int i = 1; ; i++) {
        if (m * i <= n) {
            n++;
        } else {
            break;
        }
    }
    cout<<n;
    return 0;
}