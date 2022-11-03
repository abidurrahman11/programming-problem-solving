// Codeforces Problem: Cakeminator
// Link: https://codeforces.com/problemset/problem/330/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int r, c, row = 0, col = 0;
    cin>>r>>c;
    string arr[r];
    for (int i = 0; i < r; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == 'S') {
                row++;
                break;
            }
        }
    }
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            if (arr[j][i] == 'S') {
                col++;
                break;
            }
        }
    }
    cout<<(r * c) - (row * col);
    return 0;
}