#include<iostream>
using namespace std;

int main () {
    int n, a, b, years = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n-1; i++) {
        cin>>arr[i];
    }
    cin>>a>>b;
    for (int i = a-1; i < b-1; i++) {
        years += arr[i];
    }
    cout<<years;
    return 0;
}


//Codeforces Problem: Army
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/38/A