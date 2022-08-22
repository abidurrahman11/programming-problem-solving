#include<iostream>
using namespace std;

int main () {
    long long n;
    cin>>n;
    
    int ans = n/100;
    int left = n%100;

    ans+=left/20;
    left = left%20;

    ans+=left/10;
    left = left%10;

    ans+=left/5;
    left = left%5;

    ans+=left/1;

    cout<<ans<<endl;
    return 0;
}


//Codeforces Problem: Hit the Lottery
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/996/A