#include<iostream>
using namespace std;

int main () {
    string s;
    cin>>s;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '4' || s[i] == '7') {
            count++;
        }
        if (count > 7) {
            cout<<"NO";
            return 0;
        }
    }
    if (count == 4 || count == 7) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}


//Codeforces Problem: Nearly Lucky Number
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/110/A