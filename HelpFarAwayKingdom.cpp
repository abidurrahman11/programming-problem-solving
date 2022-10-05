#include<iostream>
#include<string>
using namespace std;

int main () {
    string s;
    cin>>s;
    int n = s.find('.');
    if (s[n - 1] == '9') {
        cout<<"GOTO Vasilisa.";
    } else {
        if (s[n + 1] >= '5') {
            s[n - 1] += 1;
        }
        s.erase(s.begin() + n, s.end());
        cout<<s;
    }
    return 0;
}


//Codeforces Problem: Help Far Away Kingdom
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/99/A