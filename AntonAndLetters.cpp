#include<iostream>
#include<set>
using namespace std;

int main () {
    string s;
    set <char> mySet;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            mySet.insert(s[i]);
        }
    }
    cout<<mySet.size();
    return 0;
}



//Codeforces Problem: Anton and Letters
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/443/A