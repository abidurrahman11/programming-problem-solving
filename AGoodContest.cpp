#include<iostream>
using namespace std;

int n, a, b, flag;
string s;

int main () {
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>s>>a>>b;

        if (a >= 2400 && b > a) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}


//Codeforces Problem: A Good Contest
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/681/A