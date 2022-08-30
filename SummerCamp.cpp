#include<iostream>
#include<string>
using namespace std;

int main () {
    int n;
    string s;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        s+=to_string(i);
    }
    cout<<s[n-1];
    return 0;
}


//Codeforces Problem: Summer Camp
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/672/A