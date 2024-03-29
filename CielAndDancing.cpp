// Codeforces Problem: 322A - Ciel and Dancing
// Link: https://codeforces.com/problemset/problem/322/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, m;
    cin>>n>>m;
    int songs = n + m - 1;
    cout<<songs<<"\n";
    for (int i = 0; i < songs; i++) {
        if (m == 0) {
            n--;
            cout<<n<<" "<<m + 1<<"\n";
        } else {
            cout<<n<<" "<<m<<"\n";
            m--;
        }
    }
    return 0;
}