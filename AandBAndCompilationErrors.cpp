// Codeforces Problem: 519B - A and B and Compilation Errors
// Link: https://codeforces.com/problemset/submission/519/201172230
// Status: Accepted      Language: C++

#include<iostream>
#include<map>
using namespace std;

int main () {
    int n;
    cin>>n;
    map <int, int> mp1, mp2, mp3;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        mp1[x]++;
    }
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin>>x;
        mp2[x]++;
    }
    for (auto x : mp1) {
        if (mp2[x.first] < x.second) {
            cout<<x.first<<"\n";
            break;
        }
    }
    for (int i = 0; i < n - 2; i++) {
        int x;
        cin>>x;
        mp3[x]++;
    }
    for (auto x : mp2) {
        if (mp3[x.first] < x.second) {
            cout<<x.first<<"\n";
            break;
        }
    }
    return 0;
}