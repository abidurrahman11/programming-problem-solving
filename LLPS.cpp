#include<iostream>
using namespace std;

int main () {
    string s;
    cin>>s;
    int count = 0;
    char ans = s[0];
    for (int i = 0; i < s.size(); i++) {
        if (s[i] > ans) {
            ans = s[i];
            count = 1;
        } else if (s[i] == ans) {
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        cout<<ans;
    }
    return 0;
}



//Codeforces Problem: LLPS
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/202/A