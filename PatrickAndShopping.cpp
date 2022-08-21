#include<bits/stdc++.h>
using namespace std;
int main() {
    long long d1, d2, d3;
    cin>>d1>>d2>>d3;

    long long way1 = (d1*2) + (d2*2);
    long long way2 = d1 + d3 + d2;
    long long way3 = (d1*2) + (d3*2);
    long long way4 = (d2*2) + (d3*2);

    long long ans = min({way1, way2, way3, way4});

    cout<<ans;
    return 0;
}


//Codeforces Problem: Patrick and Shopping
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/599/A