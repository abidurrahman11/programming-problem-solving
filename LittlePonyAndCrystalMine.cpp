#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int nHalf = (n/2)+1;
    int ds = 1;
    int stars = n-1;

    for (int i = 1; i < nHalf; i++) {
        for(int i = 1; i <= stars/2; i++) {
            cout<<"*";
        }
        for (int i = 1; i <= ds; i++) {
            cout<<"D";
        }
        for(int i = 1; i <= stars/2; i++) {
            cout<<"*";
        }
        ds+=2;
        stars-=2;
        cout<<"\n";
    }

    for (int i = 1; i <= nHalf; i++) {
        for (int i = 1; i <= stars/2; i++) {
            cout<<"*";
        }
        for (int i = 1; i <= ds; i++) {
            cout<<"D";
        }
        for (int i = 1; i <= stars/2; i++) {
            cout<<"*";
        }
        ds-=2;
        stars+=2;
        cout<<"\n";
    }
    return 0;
}


//Codeforces Problem: Little Pony and Crystal Mine
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/454/A