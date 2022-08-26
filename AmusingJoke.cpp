#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    string a, b, c;
    cin>>a>>b>>c;
    string s = a+b;

    sort(s.begin(), s.end());
    sort(c.begin(), c.end());

    if (s == c) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}


//Codeforces Problem: Amusing Joke
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/141/A