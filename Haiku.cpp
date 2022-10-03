#include<iostream>
using namespace std;

int main () {
    string s;
    int conditions[3] = {5, 7, 5};
    bool haiku = true;
    for (int i = 0; i < 3; i++) {
        getline(cin, s);
        int syllables = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                syllables += 1;
            }
        }
        if (syllables != conditions[i]) {
            haiku = false;
        }
    }
    if (haiku) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}




//Codeforces Problem: Haiku
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/78/A