#include<iostream>
using namespace std;

int main () {
    string s;
    cin>>s;
    int ans = 0, q1 = 0, q2 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'Q') {
            ans += q1;
            q2++;
        } else if (s[i] == 'A') {
            q1 += q2;
        }
    }
    cout<<ans;
    return 0;
}


//Codeforces Problem: QAQ
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/894/A