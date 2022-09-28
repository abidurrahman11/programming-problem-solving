#include<iostream>
using namespace std;

int main () {
    int n, m;
    cin>>n>>m;
    char s [n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>s[i][j];
        }
    }

    int minI = n, minJ = m, maxI = 0, maxJ = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] == '*') {
                if (i < minI) {
                    minI = i;
                }
                if (i > maxI) {
                    maxI = i;
                }
                if (j < minJ) {
                    minJ = j;
                }
                if (j > maxJ) {
                    maxJ = j;
                }
            }
        }
    }

    for (int i = minI; i <= maxI; i++) {
        for (int j = minJ; j <= maxJ; j++) {
            cout<<s[i][j];
        }
        cout<<"\n";
    }
    return 0;
}


//Codeforces Problem: Letter
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/14/A