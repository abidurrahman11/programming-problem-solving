#include<iostream>
using namespace std;

int main() {
    int n, S = 0, F = 0;
    string s;
    cin>>n;
    cin>>s;
    for (int i = 0; i < n-1; i++) {
        if (s[i] == 'S' && s[i+1] == 'F') {
            S++;
        } else if (s[i] == 'F' && s[i+1] == 'S') {
            F++;
        }
    }
    if(S > F) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}


//Codeforces Problem: Between the Offices
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/867/A