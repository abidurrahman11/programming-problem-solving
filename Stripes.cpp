#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        string ans = "B";
        string arr[8];
        for (int i = 0; i < 8; i++) {
            cin>>arr[i];
        }
        for (int i = 0; i < 8; i++) {
            int r = 0;
            for (int j = 0; j < 8; j++) {
                if (arr[i][j] == 'R') {
                    r++;
                }
            }
            if (r == 8) {
                ans  = "R";
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}



//Codeforces Problem: Stripes
//Link: https://codeforces.com/problemset/problem/1742/C
//Status: Accepted      Language: C++