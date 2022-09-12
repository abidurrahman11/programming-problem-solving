#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int n, d, count = 0, ans = 0;
    cin>>n>>d;
    string s;
    char l = '0';
    for(int i = 0; i < d; i++) {
        cin>>s;
        if (s.find(l) != string::npos) {
            count++;
            ans = max(count, ans);
        } else {
            count = 0;
            ans =  max(count, ans);
        }
    }
    cout<<ans; 
    return 0;
}


//Codeforces Problem: Opponents
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/688/A