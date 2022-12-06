// Codeforces Problem: Trip For Meal
// Link: https://codeforces.com/problemset/problem/876/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, a,b,c; 
    cin>>n>>a>>b>>c;
    int x = min(a, min(b, c));
    if (x == a || x == b || n == 1) {
        cout<<(n - 1) * min(a, b);
    }else{
        cout<<min(a, b) + c * (n - 2);
    }
    return 0;
}