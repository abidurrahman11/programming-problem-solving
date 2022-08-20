#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int toast = (k*l)/nl;
    int lime = c*d;
    int salt = p/(np);
    int ans = min({toast, lime, salt})/n;

    cout<<ans;
    return 0;
}


//Codeforces Problem: Soft Drinking
//Status: Accepted
//Link: https://codeforces.com/contest/151/problem/A