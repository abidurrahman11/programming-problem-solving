#include<iostream>
using namespace std;

int main () {
    int n, pair = 0;
    cin>>n;
    string arr[n];
    for (int i = 0; i < n; i++) {
        string s;
        cin>>s;
        if (s[0] == 'O' && s[1] == 'O' && pair == 0) {
            pair++;
            s[0] = '+';
            s[1] = '+';
        } else if (s[3] == 'O' && s[4] == 'O' && pair == 0) {
            pair++;
            s[3] = '+';
            s[4] = '+';
        }
        arr[i] = s;
    }

    if (pair == 0) {
        cout<<"NO";
    } else {
        cout<<"YES\n";
        for (int i = 0; i < n; i++) {
            cout<<arr[i]<<"\n";
        }
    }
    return 0;
}


//Codeforces Problem: Bus to Udayland
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/711/A