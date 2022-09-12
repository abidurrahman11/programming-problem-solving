#include<iostream>
using namespace std;

int main () {
    int n, ans;
    cin>>n;
    if (n%2 == 0) {
        ans  = (n * n) / 2;
    } else {
        ans = ((n * n) / 2) + 1;
    }
    cout<<ans<<"\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i%2 == 1 && j%2 == 1 || i%2 == 0 && j%2 == 0) {
                cout<<'C';
            } else {
                cout<<'.';
            }
        }
        cout<<"\n";
    }
    return 0;
}


//Codeforces Problem: Coder
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/384/A