#include<iostream>
#include<iomanip>
using namespace std;

int main () {
    int n, a;
    double x = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>a;
        x += a;
    }
    double y = x/n;
    cout<<fixed<<setprecision(12)<<y;
    return 0;
}



//Codeforces Problem: Drinks
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/200/B