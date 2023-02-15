// Codeforces Problem: 4C - Registration System
// Link: https://codeforces.com/problemset/problem/4/C
// Status: Accepted      Language: C++

#include<iostream>
#include<map>
using namespace std;

int main () {
    int n;
    cin>>n;
    map <string, int> mp;
    for (int i = 0; i < n; i++) {
        string s;
        cin>>s;
        if (mp[s] == 0) {
            cout<<"OK\n";
        } else {
            cout<<s<<mp[s]<<"\n";
        }
        mp[s]++;
    }
    return 0;
}