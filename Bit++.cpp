#include<iostream>
using namespace std;

int main () {
    int n, x = 0;
    cin>>n;
    string s;
    while (n--) {
        cin>>s;
        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    cout<<x;
    return 0;
}



//Codeforces Problem: Bit++
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/282/A