#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 1; i*i <= n; i++) {
        if (n%i == 0) {
            v.push_back(i);
            if ((n/i) != i) {
                v.push_back(n/i);
            }
        } 
    }
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i] * v[i] == n) {
            cout<<v[i]<<" "<<v[i];
        } else if (v[i] * v[i+1] == n) {
            cout<<v[i] <<" "<< v[i+1];
        }
    }
    return 0;
}


//Codeforces Problem: Display Size
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/747/A