// Codeforces Problem: Winner
// Link: https://codeforces.com/contest/2/submission/202521391
// Status: Accepted      Language: C++

#include<iostream>
#include<map>
using namespace std;

#define ll long long

int main () {
    int n;
    cin>>n;
    ll maxi = -10000;
    int score[n];
    string name[n];
    map <string, ll> mp, mp2;
    for (int i = 0; i < n; i++) {
        cin>>name[i]>>score[i];
        mp[name[i]] += score[i];
    }
    for (int i = 0; i < n; i++) {
        maxi = max (mp[name[i]], maxi);
    }
    for (int i = 0; i < n; i++) {
        mp2[name[i]] += score[i];
        if (mp2[name[i]] >= maxi && mp[name[i]] == maxi) {
            cout<<name[i];
            break;
        }
    }  
    return 0;
}