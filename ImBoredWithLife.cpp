#include<iostream>
#include<cstdlib>
using namespace std;
typedef long long ll;

ll factorial (ll small) {
    if (small <= 1) {
        return 1;
    }
    return small*factorial(small-1);
}

int main () {
    ll a, b;
    cin>>a>>b;
    ll small = min(a, b);
    cout<<factorial(small);
    return 0;
}


//Codeforces Problem: I'm bored with life
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/822/A