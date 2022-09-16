#include<iostream>
using namespace std;

int main () {
    int n;
    string s;
    int c1 = 0, c2 = 0;
    cin>>n>>s;
    for (int i = 0; i < n; i++) {
        if (s[i] != '4' && s[i] != '7') {
            cout<<"NO";
            return 0;
        } else {
            if (i < n/2) {
                c1 += s[i];
            } else {
                c2 += s[i];
            }
        }  
    }
    if (c1 == c2) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
   
    return 0;
}



//Codeforces Problem: Lucky Ticket
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/146/A