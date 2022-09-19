#include<iostream>
#include<algorithm>
using namespace std;
int main () {
    string s;
    cin>>s;
    cout<<s;
    reverse(s.begin(), s.end());
    cout<<s;
    return 0;
}


//Codeforces Problem: Palindromic Supersequence
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/932/A