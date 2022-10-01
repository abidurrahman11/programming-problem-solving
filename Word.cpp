#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    string s;
    cin>>s;
    int l = 0, u = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            u++;
        } else {
            l++;
        }
    }
    if (u > l) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout<<s;
    return 0;
}


//Codeforces Problem: Word
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/59/A