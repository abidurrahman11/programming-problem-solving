#include<bits/stdc++.h>
using namespace std;

int main () {
    int a, b;
    cin>>a>>b;

    int totalDistance = abs(a-b);
    int firstDistance = totalDistance/2;
    int secondDistance = totalDistance - firstDistance;
    
    int aTiredness = (firstDistance*(firstDistance+1))/2;
    int bTiredness = (secondDistance*(secondDistance+1))/2;

    cout<<aTiredness + bTiredness;
    return 0;
}


//Codeforces Problem: Friends Meeting
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/931/A