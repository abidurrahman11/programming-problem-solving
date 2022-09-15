#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main () {
    int n, moves = 0;
    string s1, s2;
    cin>>n>>s1>>s2;
    for (int i = 0; i < n; i++) {
        int d1 = abs(s1[i] - s2[i]);
        int d2 = 10 - d1;
        moves += min(d1, d2);
    }
    cout<<moves;
    return 0;
}



//Codeforces Problem: Combination Lock
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/540/A