#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main () {
    string s;
    cin>>s;
    char c = 'a';
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        int d1 = abs(s[i] - c);
        int d2 = 26 - d1;
        count += min(d1, d2);
        c = s[i];
    }
    cout<<count;
    return 0;
}


//Codeforces Problem: Night at the Museum
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/731/A