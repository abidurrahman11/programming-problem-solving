#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int n, ltrs = 0;
    cin>>n;
    string s;
    cin>>s;

    for (int i = 0; i < n; i++) {
        s[i] = toupper(s[i]);
    }
    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        if (s[i] != s[i + 1]) {
            ltrs++;
        }
    }

    if (ltrs == 26) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}


//Codeforces Problem: Pangram
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/520/A