#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int a, b, c;
    cin>>a>>b>>c;

    int minFruit = min({a, b/2, c/4});
    cout<<minFruit*7;

    return 0;
}


//Codeforces Problem: Compote
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/746/A