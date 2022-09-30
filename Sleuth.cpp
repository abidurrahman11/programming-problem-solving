#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    string s;
    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    char last = s[s.length() - 2];
    last = towupper(last);
    if (last == 'A' || last == 'E' || last == 'I' || last == 'O' || last == 'U' || last == 'Y') {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}


//Codeforces Problem: Sleuth
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/49/A