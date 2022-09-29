#include<iostream>
using namespace std;

int main () {
    int n, m;
    cin>>n>>m;
    string arr[100];
    for (int i = 0; i < n; i++) {
        string s;
        cin>>s;
        arr[i] = s;
        for (int i = 0; i < s.length(); i++) {
            if (s[0] != s[i]) {
                cout<<"NO";
                return 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i+1]) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}



//Codeforces Problem: Flag
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/16/A