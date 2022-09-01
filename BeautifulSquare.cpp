#include<iostream>
using namespace std;

int main () {
    long long a1, a2, a3, a4, ans = 0;
    string s;
    cin>>a1>>a2>>a3>>a4;
    cin>>s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            ans+=a1;
        } else if (s[i] == '2') {
            ans+=a2;
        } else if (s[i] == '3') {
            ans+=a3;
        } else if (s[i] == '4'){
            ans+=a4;
        }
    }
    cout<<ans;
    return 0;
}


//Codeforces Problem: Black Square
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/431/A