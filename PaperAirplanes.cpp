#include<iostream>
using namespace std;

int main () {
    int k, n, s, p;
    cin>>k>>n>>s>>p;

    int sheetPerPerson = (n + (s - 1)) / s;
    int totlalSheet = k * sheetPerPerson;
    int packs = (totlalSheet + (p - 1)) / p;

    cout<<packs;
    return 0;
}


//Codeforces Problem: Paper Airplanes
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/965/A