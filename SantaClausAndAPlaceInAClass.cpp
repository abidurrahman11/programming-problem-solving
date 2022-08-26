#include<iostream>
using namespace std;

int main () {
    int n, m, k;
    cin>>n>>m>>k;

    char D;
    if (k%2 == 0) {
        D = 'R';
    } else {
        D = 'L';
    }

    int p = (k-1)/2;
    int lane = (p/m)+1;
    int desk = (p%m+1);

    cout<<lane<<" "<<desk<<" "<<D;

    return 0;
}


//Codeforces Problem: Santa Claus and a Place in a Class
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/752/A