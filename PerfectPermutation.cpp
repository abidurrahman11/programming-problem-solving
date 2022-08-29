#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    if (n%2 != 0) {
        cout<<-1;
    } else {
        cout<<"2 1 ";
        for (int i = 3; i <= n; i++) {
            if (i%2 == 0) {
                cout<<i-1<<" ";
            } else {
                cout<<i+1<<" ";
            }
        }
    }
    return 0;
}


//Codeforces Problem: Perfect Permutation
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/233/A